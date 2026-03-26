#include <iostream>

using namespace std;

int main() {
    int M[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int (*ptr)[3];
    int* p;
    int** pt;

    ptr = M;
    cout << "ptr        = " << ptr << '\n';
    cout << "M          = " << M << '\n';
    cout << "ptr + 1    = " << ptr + 1 << '\n';
    cout << "M + 1      = " << M + 1 << '\n';
    cout << "*(ptr + 1) = " << *(ptr + 1) << '\n';
    cout << "ptr[1]     = " << ptr[1] << '\n';
    cout << "*(M + 1)   = " << *(M + 1) << '\n';
    cout << "M[1]       = " << M[1] << '\n';
    cout << "**(ptr+1)  = " << **(ptr + 1) << '\n';
    cout << "**(M+1)    = " << **(M + 1) << '\n';
    cout << "*M[1]      = " << *M[1] << '\n';
    cout << "M[1][0]    = " << M[1][0] << "\n\n";

    p = M[0];
    cout << "p          = " << p << '\n';
    cout << "M[0]       = " << M[0] << '\n';
    cout << "*M         = " << *M << '\n';
    cout << "p + 1      = " << p + 1 << '\n';
    cout << "M[0] + 1   = " << M[0] + 1 << '\n';
    cout << "*M + 1     = " << *M + 1 << '\n';
    cout << "*(p + 1)   = " << *(p + 1) << '\n';
    cout << "*(M[0]+1)  = " << *(M[0] + 1) << '\n';
    cout << "*(*M + 1)  = " << *(*M + 1) << "\n\n";

    pt = &p;  // pt = M; (X)
    cout << "pt         = " << pt << '\n';
    cout << "*pt        = " << *pt << '\n';
    cout << "p          = " << p << '\n';
    cout << "**pt       = " << **pt << '\n';
    cout << "*p         = " << *p << '\n';

    return 0;
}

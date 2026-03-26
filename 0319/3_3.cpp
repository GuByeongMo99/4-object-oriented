#include <iostream>

using namespace std;

bool bigger(int a, int b, int& big) 
{
    if (a >= b) // a가 b보다 크거나 같으면
        big = a;
    else
        big = b;

    if (a == b) //a 와 b가 같은경우
        return true;
    else
        return false;
}

int main() 
{
    int x, y, big;
    bool b;
    cout << "두 정수를 입력하세요 >> ";
    cin >> x >> y;
    b = bigger(x, y, big);
    if (b)
        cout << "same" << endl;
    else
        cout << "큰 수는 " << big << "입니다." << endl;
}

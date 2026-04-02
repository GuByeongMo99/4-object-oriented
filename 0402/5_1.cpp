#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name[5];
    string last;

    for (int i = 0; i < 5; i++) 
    {
        cout << "이름 >> ";
        getline(cin, name[i]);
        if (i == 0 || name[i] > last) 
        {
            last = name[i];
        }
    }

    cout << "사전에서 가장 뒤에 나오는 문자열은 " << last << endl;
}

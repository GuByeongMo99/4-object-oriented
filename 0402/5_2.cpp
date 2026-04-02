#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    vector<string> name(5);
    string last;
    cout << "이름을 5개 입력하라" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << i + 1 << ">>";
        getline(cin, name[i]);

        if (i == 0 || name[i] > last) 
        {
            last = name[i];
        }
    }

    cout << "사전에서 가장 뒤에 나오는 이름은 " << last << endl;
}

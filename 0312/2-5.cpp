#include <iostream>
#include <cstring>
    using namespace std;

    int main() 
    {
        char password1[100], password2[100];
        cout << "새 암호를입력하세요>>";
        cin >> password1;
        cout << "다시 입력하세요>>";
        cin >> password2;

        if(strcmp(password1, password2) == 0)
            cout << "같습니다" << endl;
        else 
            cout << "같지 않습니다" << endl;
}
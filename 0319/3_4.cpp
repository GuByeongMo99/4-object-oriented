#include <iostream>

using namespace std;

char& find(char a[], char c, bool&sucess)
{
    static char dummy = '\0';
    for (int i = 0; a[i] != '\0'; i++) 
    {
        if (a[i] == c) {
            sucess = true;
            return a[i];
        }
    }
    sucess = false;
    return dummy;
}

int main() 
{
    char s[] = "Nike";
    bool b = false;
    char& loc = find(s,'M',b);
    if(b == false) 
    {
        cout << "M을 발견할 수 없다" << endl;
        return 0;
    }
    loc = 'm';
    cout << s << endl;


}

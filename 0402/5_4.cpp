#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;

    string text, line;
    while (true) 
    {
        getline(cin, line);
        int pos = line.find('&'); //&의 위치를 찾음
        if (pos != -1) 
        {
            text += line.substr(0, pos); //& 앞까지만 저장
            break; //루프 종료
        }
        text += line + "\n"; //여러줄 입력하는 형태를 유지
    }

    string findWord, replaceWord;
    cout << "find: ";
    getline(cin, findWord);
    cout << "replace: ";
    getline(cin, replaceWord);

    int start = 0;
    while (true) 
    {
        int pos = text.find(findWord, start); //찾을 단어 검색
        if (pos == -1) //안나오면 종료
        {
            break;
        }
        text.replace(pos, findWord.length(), replaceWord); //단어 교체
        start = pos + replaceWord.length(); //바꾼 단어 바로 다음 위치부터 찾기 시작
    }

    s = text;
    cout << s << endl;
}

//목표: 디폴트 인자를 가진 하나의 함수로 big()을 작성하고 프로그램을 완성하시오.
#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) //c는 정해진 값이 없으면 default값이 100
{
    int max = (a > b) ? a : b; //a가 b보다 크면 a 작으면 b를 max에 넣어라
    return (max > c) ? c : max; 
}

int main() 
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}

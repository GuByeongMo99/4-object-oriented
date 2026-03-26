//목표: big() 함수를 2개 중복하여 작성하고 프로그램을 완성하시오
#include <iostream>
using namespace std;

int big(int a, int b) 
{
    if (a > b) 
    {
        return (a < 100) ? a : 100; //a가 100보다 작으면 a 출력 크면 100출력
    }
    return (b < 100) ? b : 100; //b가 100보다 작으면 b출력 크면 100출력
}

int big(int a, int b, int c) 
{
    int max = (a > b) ? a : b;
    return (max > c) ? c : max;
}

int main() 
{
    int x = big(3, 5);
    int y = big(300, 60);
    int z = big(30, 60, 50);
    cout << x << ' ' << y << ' ' << z << endl;
}

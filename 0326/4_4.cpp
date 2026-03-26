//목표: 배열과크기를 매개 변수로 받아 합을 구하여 리턴하는 제네릭 함수 add()를 작성하려고 한다. 빈칸을 채워 프로그램을 완성하시오.
#include <iostream>
using namespace std;

template <class T> //템플릿 만들기
T add(T arr[], int size) //제너릭 함수 add 작성
{
    T sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int x[] = { 1, 2, 3, 4, 5 };
    double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
    cout << "sum of x[] = " << add(x, 5) << endl;
    cout << "sum of d[] = " << add(d, 6) << endl;
}

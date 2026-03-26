#include <iostream>
using namespace std;

template <class T> //템플릿 만들기
void reverseArray(T arr[], int size) //제너릭 함수 만들기
{
    for (int i = 0; i < size / 2; i++) //배열의 원소를 반대 순서로 뒤집는 for문
    {
        T tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }
}

int main() {
    int x[] = { 1, 10, 100, 5, 4 };
    reverseArray(x, 5);

    for (int i = 0; i < 5; i++)
        cout << x[i] << ' ';
    cout << endl;

    double y[] = { 1.3, -7.33, 5.84, 0.84, -66.428, 2.6, 71.1 };
    reverseArray(y, 7);

    for (int i = 0; i < 7; i++)
        cout << y[i] << ' ';
    cout << endl;
}

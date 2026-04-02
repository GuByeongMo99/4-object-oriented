#include <iostream>
using namespace std;

class Rectangle //사각형의 설계도
{
public:
    int width;
    int height;

    int getArea() 
    {
        return width * height;
    }
};

int main() 
{
    Rectangle rect; //설계도 이용하기
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << endl;
}

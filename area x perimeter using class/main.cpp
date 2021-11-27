#include <iostream>

using namespace std;

class Triangle{
    public:
        double hAlf;
        int base;
        int height;
        int side;
        int area=(hAlf*base*height);
        int perimeter=(base+height+side);


        int areaOfTriangle(double hAlf,int base, int height){
        cout<<"The area of the triangle is:"<<area<<endl;
        return area;
        }
        int perimeterOfTriangle(int base, int height, int side){
        cout<<"The perimeter of the triangle is:"<<perimeter;
        return perimeter;
        }

};

int main()
{
    Triangle myTriangle;
    myTriangle.areaOfTriangle(0.5 , 4 , 3);
    myTriangle.perimeterOfTriangle(3 , 4 , 5);
    return 0;
}

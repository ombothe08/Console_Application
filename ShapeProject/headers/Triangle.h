
#include<iostream>
using namespace std;
class Triangle{

    private:
    int length1;
    int length2;
    int base;
    int height;
    double area;
    int perimeter;
    
    public:
    Triangle();
    void setDimensions(int l1,int l2,int b,int h);

    void setArea();

    void setPerimeter();
    double getArea();
    int getPerimeter();
    ~Triangle();
    
};


#include<iostream>
#include<cmath>
using namespace std;
class Ellipse{

    private:
    double majoraxis;
    double minoraxis;
    double area;
    double perimeter;
    
    public:
    Ellipse();
    void setDimensions(double major,double minor);

    void setArea();

    void setPerimeter();
    int getArea();
    int getPerimeter();
    ~Ellipse();
    
};

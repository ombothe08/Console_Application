
#include<iostream>
#include<cmath>
using namespace std;
class Line{

    private:
    double x1;
    double x2;
    double y1;
    double y2;
    double length;

    public:
    Line();
    void setDimensions(double x1 ,double x2,double y1 ,double y2);

    
    void setLength();
    double getLength();

    ~Line();
    
};

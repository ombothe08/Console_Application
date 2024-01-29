
#include<iostream>
using namespace std;
class Circle{

    private:
    double radius;
    double area;
    double circumference;
    
    
    public:
    Circle();
    //setter declaration for dimensions
    void setDimensions(double r);

    //setter for area
    void setArea();

    //setter for circumference
    void setCircumference();

    //getter for area
    double getArea();

    //getter for circumference
    double getCirumference();
    
    ~Circle();
    
};


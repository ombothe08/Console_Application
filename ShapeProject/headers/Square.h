
#include<iostream>
using namespace std;
class Square{

    private:
    int length;
    int area;
    int perimeter;
    
    public:
    Square();

    void setDimensions(int l);

    void setArea();

    void setPerimeter();
    int getArea();
    int getPerimeter();
    ~Square();
    
};

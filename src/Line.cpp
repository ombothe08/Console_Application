#include"../headers/Line.h"
#include<iostream>

Line :: Line():x1(0),x2(0),y1(0),y2(0){}
Line :: ~Line(){}

void Line ::setDimensions(double x1 ,double x2,double y1 ,double y2)
{
    this->x1 = x1;
    this->x2 = x2;
    this->y1 = y1;
    this->y2 = y2;
}
void Line ::setLength(){
    length=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
double Line :: getLength(){
    return length;
}


    



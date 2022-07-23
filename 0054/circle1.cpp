#include <iostream>
#include "circle1.h"

Circle::Circle(double r,int x,int y):point(x,y)
{
    setr(r);
}
void Circle::setr(double r) 
{
    radius = r > 0 ? r : 0;
}
double Circle::getr() const 
{
    return radius;
}
double Circle::area()const 
{
    return 3.14 * radius * radius;
}
void Circle::print()const 
{
    point::print();
    std::cout << "; Radius:" << radius; 
}
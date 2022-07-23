#include <iostream>
#include "cylindr1.h"

using namespace std;

Cylindr::Cylindr(double h,double r,int x,int y)
    :Circle(r,x,y)
{
    seth(h);
}
void Cylindr::seth(double h)
{
    height = h > 0 ? h : 0;
}
double Cylindr::geth()const
{
    return height;
}
double Cylindr::area()const
{
    return 2 * Circle::area() +
           2 * 3.14 * getr() * height;
}
double Cylindr::volume()const 
{
    return Cylindr::area() * height;
}
void Cylindr::print()const 
{
    Circle::print();
    cout << " height:" << height;
}
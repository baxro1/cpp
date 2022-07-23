#include <iostream>
#include "point1.h"

using namespace std;

point::point(int x,int y)
{
    setp(x,y);
}
void point::setp(int a,int b)
{
    x = a;
    y = b;
}
void point::print() const 
{
    cout << "[" << x << "," << y << "]" << endl;
}


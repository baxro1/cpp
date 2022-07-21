#include <iostream>
#include "hourlyw.h"

using namespace std;

Hourlyw::Hourlyw(char* fn,char *ln,double w,double h)
    :Employee(fn,ln)
{
    setW(w);
    setH(h);
}
void Hourlyw::setH(double h)
{
    hours = h > 0 ? h : 0;
}
void Hourlyw::setW(double w)
{
    wage = w > 0 ? w : 0;
}
void Hourlyw::print()const
{
    cout << "\n Hourlyw: ";
    Employee::print();
}
double Hourlyw::earing()const
{
    if(hours <= 40)
        return hours * wage;
    else 
        return wage * 40 + (hours - 40) * wage * 1.5;
}



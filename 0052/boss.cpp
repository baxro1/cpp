#include <iostream>
#include "boss.h"


Boss::Boss(char* fn,char *ln,double d)
    : Employee(fn,ln)
{
    setWS(d);
}

void Boss::setWS(double d)
{
    weeklysalary = (d > 0)? d:0;
}

double Boss::earing()const 
{
    return weeklysalary;
}

void Boss::print()const
{
    cout << "\n Boss: ";
    Employee::print();
}

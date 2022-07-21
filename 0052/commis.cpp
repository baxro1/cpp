#include <iostream>
#include "commis.h"

CommiW::CommiW(const char* fn,const char* ln,double ds,double dc,int q)
    :Employee(fn,ln)
{
    setSalary(ds);
    setCommi(dc);
    setQuantity(q);
}
void CommiW::setSalary(double d)
{
    slalary = d > 0 ? d : 0;
}
void CommiW::setCommi(double d)
{
    commi = d > 0 ? d : 0;
}
void CommiW::setQuantity(int q)
{
    quantity = q > 0 ? q : 0;
}
void CommiW::print()const
{
    cout << "\n Commi: ";
    Employee::print();
}
double CommiW::earing()const
{
    return slalary + commi * quantity;
}



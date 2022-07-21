#include <iostream>
#include "piecw.h"

using namespace std;

Piecw::Piecw(char* fn,char* ln,double w,int q)
    :Employee(fn,ln)
{
    setWage(w);
    setQunt(q);
}
void Piecw::setWage(double w)
{
    wage = w > 0 ? w : 0;
}
void Piecw::setQunt(int q)
{
    quantity = q > 0 ? q : 0;
}
void Piecw::print()const
{
    cout << "\n piecWorker: ";
    Employee::print();
}
double Piecw::earing()const
{
    return quantity * wage;
}





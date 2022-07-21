#ifndef COMMIS1_H
#define COMMIS1_H

#include "Employe.h"

class CommiW: public Employee
{
public:
    CommiW(const char*,const char*,double =0.0,double =0.0,int =0);
    ~CommiW();
    void setSalary(double);
    void setCommi(double);
    void setQuantity(int);
    virtual void print()const;
    virtual double earing()const;

private:
    double slalary;
    double commi;
    int quantity;
};
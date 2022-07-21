#ifndef PIECW1_H
#define PIECW1_H

#include "Employe.h"

class Piecw:public Employee
{
public:
    Piecw(char*,char*,double =0.0,int =0);
    void setWage(double);
    void setQunt(int);
    virtual void print()const;
    virtual double earing()const;

private:
    double wage;
    int quantity;
};
#ifndef HOURLYW1_H
#define HOURLYW1_H

#include "Employe.h"

class Hourlyw : public Employee{
public:
    Hourlyw(char*,char*,double =0.0,double =0.0);
    void setW(double);
    void setH(double);
    virtual void print()const;
    virtual double earing()const;

private:
    double wage;
    double hours;
};
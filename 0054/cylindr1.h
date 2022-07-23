#ifndef CYLINDR1_H
#define CYLINDR1_H

#include "circle1.h"


class Cylindr : public Circle {
public:
    Cylindr(double =0.0,double =0.0,int =0,int =0);
    void seth(double);
    double geth() const;
    virtual double area() const;
    virtual double volume()const;
    virtual void printshapename() const {std::cout << "cylinder: ";}
    virtual void print()const;

private:
    double height;
};
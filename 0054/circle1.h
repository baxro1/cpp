#ifndef CIRCLE1_H
#define CIRCLE1_H
#include "point1.h"


class Circle : public point {
public:
    Circle(double,int,int);
    void setr(double);
    double getr() const;
    virtual double area() const;
    virtual void printshape() const {cout << "circle: ";}
    virtual void print()const;

private:
    double radius;
}


#ifndef SHAPE1_H
#define SHAPE1_H

class Shape {
public:
    virtual double area() const {return 0.0;}
    virtual double volume() const {return 0.0;}
    virtual void printshapename() const =0;
    virtual void print() const =0;
};

#endif
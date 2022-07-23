#ifndef POINT1_H
#define POINT1_H

#include "shape1.h"

class point : public Shape{
public:
    point(int,int);
    void setp(int,int);
    int getx() const {return x;}
    int gety() const {return y;}
    virtual void print() const;
    virtual void printshapename() const;

private:
    int x,y;
};

#endif
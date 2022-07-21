#ifndef EMPLOYEE1_H
#define EMPLOYEE1_H

#include <iostream>


class Employee{
public:
    Employee(char *,char *);
    ~Employee();

    const char* getFname()const;
    const char* getLname()const;
    virtual void print()const;
    virtual double earing()const = 0;

private:
    char* f_name;
    char* l_name;
};

#endif
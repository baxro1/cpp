#ifndef BOSS1_H
#define BOSS1_H


class Boss:public Employee{
public:
    Boss(char*,char*,double =0);
    ~Boss();
    void setWS(double);
    virtual void print()const;
    virtual double earing()const;

private:
    double weeklysalary;
};
#include <iostream>
#include "time1.h"

using namespace std;

Time::Time(int h,int m,int s): s(s) // initialze to const with owner func
{
     set_t(h,m);
}

void Time::print_p()const
{
     cout << h << ":" << m << ":" << s << endl;
}

int &Time::set_hour(int a){}

void Time::set_t(int a,int b)
{
    h = a;
    m = b;
}
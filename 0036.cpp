#include <iostream>
#include "time1.h"

using namespace std;

Time::Time()
{
    h = m = s = 1;
}

void Time::print_p()
{
     cout << Time.h << ":" << Time.m << ":" << Time.s << endl;
}
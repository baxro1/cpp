#include <iostream>
#include "time1.h"

using namespace std;

int main()
{
    
    Time t;
    const Time f;
    t.print_p();
    
    int &a = t.set_hour(10); /*  access to private variable 
                                 int &set_hour(int); if define like this in public 
                                int &Time::set_hour(int a)
                                {
                                    h = a;
                                    return h;
                                }
                             */
    cout << a << endl;
    // f = t;  we can't assign
    t.print_p();


       
    return 0;
}

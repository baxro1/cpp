#include <iostream>
#include "time1.h"

using namespace std;

int main()
{
    
    Time t;
    t.print_p();

    int &a = t.set_hour(10); /*  access to private variable 
                                 int &set_hour(int); if define like this in public 
                                int &Time::set_hour(int a)
                                {
                                    h = a;
                                    return h;
                                }
                             */
    cout << a;
    
    return 0;
}

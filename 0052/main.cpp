#include <iostream>
#include <iomanip>
#include "Employe.h"
#include "hourlyw.h"
#include "piecw.h"
#include "commis.h"
#include "boss.h"

using namespace std;

void virtual_via_pointer(const Employee*);
void virtual_via_refrence(const Employee&);

int main(){
    
    cout << setiosflags(ios::fixed | ios::showpoint)
         << setprecision(2);

    Boss b("jey","smith",80.0);
    b.print();
    cout << "earned $" << b.earing();
    virtual_via_pointer(&b);
    virtual_via_refrence(b);

    

    return 0;
}

void virtual_via_pointer(const Employee* Empoint)
{
    Empoint->print();
    cout << "earned $" << Empoint->earing();
}

void virtual_via_refrence(const Employee& Empoint)
{
    Empoint.print();
    cout << "earned $" << Empoint.earing();
}

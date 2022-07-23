#include <iostream>
#include <iomanip>
#include "shape1.h"
#include "point1.h
#include "circle1.h"
#include "cylindr1.h"

using namespace std;

void virtual_via_pointer(const Shape &);
void virtual_via_refrence(const Shape *);

int main(){

    cout << setioflages(ios::fixed | ios::showpoint)
         << setprecision(2);
    
    point p(2,4);
    Circle c(3,12,14);
    Cylindr cy(2,3,12,14);

    p.printshapename();
    p.print();
    cout << endl;

    c.printshapename();
    c.print();
    cout << endl;

    cy.printshapename();
    cy.print();
    cout << endl;

    Shape *array_of_shape[3];
    array_of_shape[0] = &p;
    array_of_shape[1] = &c;
    array_of_shape[2] = &cy;

    for(int i=0;i<3;i++)
        virtual_via_pointer(array_of_shape[i]);
    
    for(int i=0;i<3;i++)
        virtual_via_refrence(*array_of_shape[i]);
    
    return 0;
}

void virtual_via_pointer(const Shape *shptr)
{
    shptr->printshapename();
    shptr->print();
    cout << "\n area: " << shptr->area() << endl
         << "\n volume: " << shptr->volume() << endl;
}

void virtual_via_refrence(const Shape &shptr)
{
    shptr.printshapename();
    shptr.print();
    cout << "\n area: " << shptr.area() << endl
         << "\n volume: " << shptr.volume() << endl;
}
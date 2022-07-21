#include <iostream>
#include <string>
#include <assert.h>
#include "Employe.h"

using namespace std;

Employee::Employee(char* fn,char* ln)
{
    f_name = new char[strlen(fn)+1];
    assert(f_name != 0);
    strcpy(f_name,fn);

    l_name = new char[strlen(ln)+1];
    assert(l_name !=0);
    strcpy(l_name,ln);
}

Employee::~Employee()
{
    delete [] f_name;
    delete [] l_name;
}

const char* Employee::getFname()const
{
    return f_name;
}
cont char* Employee::getLname()const
{
    return l_name;
}
void Employee::print()const
{
    cout << "fn:" << f_name << endl
         << "ln:" << l_name << endl;
}





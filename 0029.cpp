#include <iostream>
#include <ctype.h>
#include <iomanip>


using namespace std;

void printstr(const char *);

int main()
{   
    char ch[] = "lai";
    printstr(ch);
    return 0;
}

void printstr(const char *a)
{
    int *c,*b;
    //int y = 1;
    //c = &y;
    // what different
    cout << setw(10) << "c" << setw(10) << "b" << endl;
    cout << setw(10) << c << setw(10) << b << endl;
    cout << setw(10) << &c << setw(10) << &b << endl;
    //cout << *c << endl; get error when u print pointer don't assign 
    
    for(; *a != '\0' ;a++)
        cout << setw(3) << *a;
   
}


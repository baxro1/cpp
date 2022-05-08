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
    int d;
    int arr[20];
    
    cout 
    << sizeof(b)  << endl
    << sizeof(*b) << endl
    << sizeof(&b) << endl
    << sizeof(d)  << endl
    << sizeof(&d) << endl
    << sizeof(arr)<< endl
    // who know what's meaning of ...

    for(; *a != '\0' ;a++)
        cout << setw(3) << *a;
   
}


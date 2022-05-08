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
    int arr[20];
    int *d ; *d = 10;
    char *f;
    void *z; // u cant define var such as void instead of pointer
   // *z = d; // ?? nope why do i get error
    f = (char *)d; // assign pointer to another pointer tyep
    int x;
    x = &arr[10] - &arr[12];
    
    cout << *f;
    cout << z << setw(3) << sizeof z << endl; 
    cout << x << endl;
    cout << "the number units of arr: " << sizeof arr /sizeof(int) << endl;
    
    for(; *a != '\0' ;a++)
        cout << setw(3) << *a;
   
}


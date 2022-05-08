#include <iostream>
#include <ctype.h>
#include <iomanip>


using namespace std;

void printstr(const char *);

int main()
{
    
    char str[] = "The news paper. ";
    //char *b = 0; // nice :: we don't error but program faild  such as zero and none-number
    //cout << b;
    const char * const a = str; // const pointer to const variable u can assign str and string 
    cout << a;
    char *c = "0kklkl"; // don't print null if assign "\0"
    cout << &c << endl; // you can see different between them(int and char)
    cout << c << endl;
    cout << *c << endl;
    cout << &str << endl;
    cout << str << endl;
    printstr(str); 
    // this is note: "0" it's a str and '0' it's a char in cpp and '00' it's a error 

    return 0;
}

void printstr(const char *a)
{
    for(; *a != '\0' ;a++)
        cout << setw(3) << *a;
}

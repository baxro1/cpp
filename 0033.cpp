#include <iostream>

using namespace std;

void func_1(int);
void func_2(int);
void func_3(int);

int mate_v1(int , int (*)(int));

int main()
{
    void (*fc[3])(int) = {func_1,func_2,func_3};
    int mate(int );
    const int unit = 10;
    char *arpo[unit] = {"hello","or","amir","hey","how are u"};
   
    cout << *arpo << endl;
    cout << mate << endl; // befor we can assign func address to pointer 
    cout << mate_v1(2,mate) << endl;
    (*fc[1])(1);

    return 0;
}

int mate(int a)
{
    return a + a;
}

int mate_v1(int a , int (*mv0)(int b))
{
    return a * (*mv0)(a);
}

void func_1(int a)
{
    cout << "func: " << a;
}

void func_2(int a)
{
    cout << "func: " << a; 
}

void func_3(int a)
{
    cout << "func: " << a;
}
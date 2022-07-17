#include <iostream>
#include <assert.h> // one of the useful tools to debug for validate a variable
                    // can use such as break point
#define NDEBUG      // use this for ignore debug function assert in code

using namespace std;

// interface class 
class imp{
public:
    imp(int v){value = v;}
    void setv(int v){value = v;}
    int getv()const {return value;}

private:
    int value;
};
// file interface
// first, define "class imp;" without define header for this file to hide

class interface{
public:
    interface(int );
    void setv(int);
    int getv()const;

private:
    imp *ptr;
};
// .cpp file for interface
// #include "imp.h"
// #include "interface.h"

/*
interface::interface(int v):ptr(new imp(v)){}
void interface::setv(int v){ptr->setv(v);}
int interface::getv(){return ptr->getv();} 
*/



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

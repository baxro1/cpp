#include <iostream>
#include <conio.h>


using namespace std;

class temp{
public:
    temp(int d = 0){this->data = d;}
    void printd();
private:
    int data;

};

int main()
{
    temp t1;
    temp t2[10];
    temp *t3;
    temp &t4 = *t3;
    // diff var of class
    t1.printd();
    cout << endl;
    for(int i=0; i< 10 ;i++) t2[i].printd();
    cout << endl;
    t3 = new temp(30);
    t3->printd();
    cout << endl;
    cout << sizeof(t1) << endl 
    << sizeof(t2) << endl
    << sizeof(t3) << endl
    << sizeof(t4);
    // do u see a diff thing ? didn't u
    // tell me what's diff bet them
    cout << endl;
    

    cout << "hello world";
    return 0;
}


inline void temp::printd()
{
    cout << data;
    return;
}


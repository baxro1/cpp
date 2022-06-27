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
    
    t1.printd();
    cout << endl;
    for(int i=0; i< 10 ;i++) t2[i].printd();
    cout << endl;
    t3 = new temp(30);
    t3->printd();
    cout << endl;
    t4.printd();
    cout << endl;
    

    cout << "hello world";
    return 0;
}


void temp::printd()
{
    cout << data;
}


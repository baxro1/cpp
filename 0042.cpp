#include <iostream>
#include <conio.h>


using namespace std;

class temp{
public:
    temp(int d = 0){this->data = d;}
    void printd(int data);
private:
    int data;

};

int main()
{
    temp t1;

    t1.printd(1);
    cout << endl;
  //cout << "hello world";
    return 0;
}


inline void temp::printd(int data)
{   
    // to hide data
    cout << data << "\t";
    cout << this->data; // or use temp::data
    return;
}


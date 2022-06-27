#include <iostream>
#include <conio.h>

//set and get
using namespace std;

class temp{
public:
    temp(){}
    //set and get func
    int getd() const;
    bool setd(int);
private:
    int data = 90;
    // Initialization in class 
};

int main()
{
    temp t1;
    
    cout << t1.getd() << endl
         << "status code to set(0): " << t1.setd(0) << " =>" 
         << t1.getd()
         << endl;
  
    return 0;
}



inline bool temp::setd(int d)
{   // use the (con)?-:- 
    return (d > 0)? data = d , true : false; 
}

inline int temp::getd() const 
{   //use inline 
    return temp::data;
}


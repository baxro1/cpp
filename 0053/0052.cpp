#include <iostream>

using namespace std;

class X{
public:
    int x1;
protected:
    int x2;
};

class Y:public X{
public:
    int y1;
};


int main(){
    
    Y v;
    v.x2 = 2; // error: the protected section of pattern is a new protected section of drived class

   return 0;
}
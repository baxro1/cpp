#include <iostream>

using namespace std;
// Do u know this realy :/


int main(){
    
    static int a;
    int b;
    static int *c ;
    int *d;
    cout << "static int a = " << a << " int b = " << b << endl;
    cout << "static int c = " << c << " &c= " << &c << " int d= " << d <<endl;

    int f;
    cout << f;
    return 0;
}
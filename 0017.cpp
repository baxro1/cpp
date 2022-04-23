#include <iostream>

using namespace std;

inline int cube(const int s){ return s * s * s; }
// inline this mean take copy to function calls a lot
int* back(int &s){static int a; return& (a+=s); }


int main(){
    
    int a = 2;
    int *b = back(a); // if we use number we get error because i have call with refrence
    cout << b << " " << *b << endl; // we access to data and location this variable 
    for (int i=1 ; i<=10 ; i++)
    {
        cout << "the cube = " << cube(i) << endl;
    }
    return 0;
}
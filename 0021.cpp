#include <iostream>

using namespace std; 

int erro(void){return 0;}
int eror(int x = 1){return x;}

template <class Z>
Z test_f(Z v1,Z v2, Z v3, int a = 2)
{
    Z maxi ;
    maxi = (v1 < v2)? v2 : v1 ;
    maxi = (maxi < v3)? v3 : maxi;
    return maxi;
}

int main(){
    
    cout << "call the eror fucntion " << eror() << endl;// note
    
    int ai,bi,ci;
    cin >> ai >> bi >> ci ;
    cout << "print the biggest = " << test_f(ai,bi,ci) << endl;

    float af,bf,cf;
    cin >> af >> bf >> cf ;
    cout  << "print the biggest = " << test_f(af,bf,cf) << endl;

    char ac,bc,cc;
    cin >> ac >> bc >> cc;
    cout << "print the biggest = " << test_f(ac,bc,cc) << endl;
    

    return 0;
}
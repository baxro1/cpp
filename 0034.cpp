#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char a[] = {'a','b','c','d'}, b[5] , *c, d;
    //for(int i=0; a[i]!='\0' ;i++) cout << a[i] << endl;

    //cin >> setw(8) >> b;// what the fuck 
    //cout << b[5] << endl;

    //cin >> setw(4) >> c;
    //cout << c << endl; // have overflow then setw cannot change anythings; 

    //cin.getline(c,12,'\0'); // need to try again 
    //cout << c;

    //cin >> setw(3) >> d;
    //cout << d;

    //for(int i=0; i<256 ;i++) cout << setw(3) << (char)i ; //fun 
    
    *c = 'a';
    cout << c; // when process a character such as a string got access to low address memory there is interrupt handler 
    
    return 0;
}


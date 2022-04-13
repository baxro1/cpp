#include <iostream>

using namespace std;

int getNmber(int );

int main()
{   
    
    int a,b ;
    cout << "Enter the number first = ";
    cin >>  a ;
    cout << "\n Enter the number secound = ";
    cin >> b ;
    
    if( a == b ) cout << "a is equal to b " << endl;
    
    if( a <= b ) cout << "a is less than or equal to b" << endl;

    if( a >= b ) cout << "a is greater than or equal to b" << endl;

    if( a < b ) cout << "a is less than b" << endl;

    if( a > b ) cout << "a is greater than b" << endl;
   
    return 0;
}
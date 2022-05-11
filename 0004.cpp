#include <iostream>

using namespace std;


int main(){
    

    int a,b,c;

    cin >> a >> b >> c ;

    if(a>b)
    {
        cout << "a > b" << endl;
    }
    else if( c > b)
    {
        cout << "c > b > a" << endl;
    }   
    else if(c > a)
    {
        cout << "b > c > a" << endl;
    }
    else 
    {
        cout << "b > a > c" << endl;
    }
    cout << "a = " << a << " b = " << b << " c = " << c << endl;
 
    return 0;
}
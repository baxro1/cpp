#include <iostream>

using namespace std;

int getNmber(int );

int main()
{   
    // first way 
   /*
    int a,b ;
    cout << "Enter the number first = ";
    cin >>  a ;
    cout << "\n Enter the number secound = ";
    cin >> b ;
    cout << "Sum = " << a+b << endl;
    */
   
    // u can write it too
    cout << getNmber() + getNmber() << "= sum";
    return 0;
}

int getNmber(int num=0){
    cout << "Enter the number num = ";
    cin >> num ;
    cout << endl;
    return num;
}
#include <iostream>
#include "0050.1.h"

using namespace std;

int main()
{
    cout << "array count :" 
         << Array::getArraycount() << endl;
    Array ineg(7),ineg_2;
    cout << "array count :" 
         << Array::getArraycount() << endl;

    cout << "ineg siez:" 
         << ineg.getSize()
         << endl
         << "array list value :"
         << ineg << endl;

    cout << "ineg siez:" 
         << ineg_2.getSize()
         << endl
         << "array list value :"
         << ineg_2 << endl;

    cout << "input value for first: " << endl;
        cin >> ineg;
    cout << "input value for secound: " << endl;
        cin >> ineg_2;


    cout << ineg << endl << ineg_2 << endl;

    if(ineg != ineg_2) cout << "not equal;"
    else cout << "is equal;"
    cout << endl;
    
    Array ineg_3(ineg);

    cout << "ineg_3 and ineg" << endl
         << "ineg size: " << ineg.getSize()
         << " <=> " << ineg_3.getSize() 
         << " :ineg_3 size" << endl;

    cout << "ineg:" << ineg << endl
         << "ineg_2" << ineg_2 << endl;

    ineg_2 = ineg;
    cout << "ineg_2:" << ineg_2 << endl 
         << "ineg_2 equal ineg:" 
         << (ineg == ineg_2 ?true:false) << endl;
    
    cout << "ineg[4]:" << ineg[4] << endl
         << ineg_3 << endl;

    ineg_3[3] = 10;
    cout << ineg_3;
    
        
        
         
    return 0;
}

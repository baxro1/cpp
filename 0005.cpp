#include <iostream>

using namespace std;

//here , this question is if we have a paper and fold for the fifth time ..!
// now , how many layers do we have ? count p variable
 
int main(){
    
    int p;
    p = 2;
    while ( p <= 1023)
    {
        p = 2 * p;
        cout << "\n p = " << p ;
    }
 
    return 0;
}
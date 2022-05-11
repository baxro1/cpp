#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath> // the cmath is new versio than math.h

using namespace std;

int square(int);

int main(){

    int a = 0;
    while (a++ < 10)
    {
        cout << setiosflags(ios::left) << setw(4) << square(a);
    }


    return 0;
}

int square(int i){
    
    return i * i;
    }   
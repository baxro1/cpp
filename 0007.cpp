#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int a,b;
    float c;
    int d = 1;

    // we use static_cast <> convert function from iomanip library
    cin >> a >> b;
    c = static_cast<float> (a) / b;
    cout << " c = " <<  setiosflags(ios::showpoint) << setprecision(3) << c;
    cout << d;
    return 0;
}


// test program to say us we can change the stream and personlize that
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int a,b;
    float c;

    // we use static_cast <> convert function from iomanip library
    cin >> a >> b;
    c = static_cast<float> (a) / b;
    cout << " c = " << c;

    return 0;
}
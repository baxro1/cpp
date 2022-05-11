#include <iostream> 
#include <iomanip>

using namespace std;

const double PI = 3.14159265358789 ;     

int main(){
    
    const float PI = static_cast<float> (::PI);
    cout << setprecision(20) 
         << "local float value of PI = " << PI
         << "\nGlobal double value of PI=" << ::PI 
         << endl;
  

    return 0;
}
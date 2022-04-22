#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

//chance 
// useful for crypt and check config or set a flag   

int main(){
    
    int a = 0;
    srand(time(0));
    while ( a++ < 64 ) 
    {   
        char ch = static_cast<char> (1 + rand() % 128);
        cout << setw(6) << setiosflags(ios::left) << ch ;
    }
    return 0;
}
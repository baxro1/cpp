#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


int main(){
    
    const int b_size = 6;
    int a,b[b_size];
    
    srand(time(0));
    for(int i=0;i<10000;i++)
    {
        ++b[( rand()%6 )];
    }
    cout << "number" << setw(8) << "n" << setw(10) << "star" << endl;
    for(int j=0;j < b_size;j++)
    {
        int c = b[j]/10;
        cout << setw(6) << j+1 << setw(8) << b[j] << setw(7) ;
        for(int i = 0; i < c; i++) cout <<  "/" ;
        cout << endl;
    }
    return 0;
}
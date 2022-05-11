#include <iostream>

using namespace std;

int floar(int x) { return x*x;}
double floar(double x){return x+x;} 
// dosnt' depend on return type

int main(){
    
    cout << "the floar one that return * = " << floar(2) << endl
         << "the floar one that return + = " << floar(2.1000) << endl;
         // detect select which one of them

    return 0;
}
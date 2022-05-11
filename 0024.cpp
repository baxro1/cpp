#include <iostream>
#include <cstdlib>

using namespace std;

void pri_a(int x) 
{
    const int y = 2;
    static int a[y] ;
    a[1] = x;
    cout << a[1] << "-" << a[0] << endl;
}   // auto init 0 to array when introduce such as static 
    // and don't destroy outside function and init repeedly    
 
int main(){

    pri_a(3);
    pri_a(4);
    
    //int a  = cin.get();
    //cout << "\n" << a;

    char str[20] = {""};
    cin >> str;
    for(int i=0;str[i] != -1;i++) cout << str[i] << " " ;
    for(int i=0;str[i] != EOF;i++) cout << str[i] << " " ;

    //this have very note
    return 0;
}
#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    
    int a,b,c;
    a = b = c = 0;
    cout << "sign out = " << static_cast <int> (EOF) << endl;
    // u can write commands until press ctrl-z in windows and unix ctrl-d 
    // if put negetive u have to do again else count for u 
    // this means u can limit user to entire valid number  
    do 
    {
        while ( a-- >= 0 )
        {
            cout << setiosflags(ios::left) << setw(4) << a ;
        }

    }while (( a = cin.get()) != EOF);
    
    
    
    
    return 0;
}
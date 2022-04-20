#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    
    int a = 5;
    for (int i=0;i<10;i++)
    {
        if (i == a) continue;
        cout << setiosflags(ios::left) << setw(4) << i; 
    }
    // as u see didn't print 5 because when use the <continue> seem's like goto loop first  
    
    
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;
// exponential complexity
// factorial and fibonachi
unsigned long factorial(unsigned long);
unsigned long fibonachi(unsigned long);
void loop(int *);

int main(){
    
    for (register int i = 0 ; i < 10 ; i++)
    {
        cout << setw(8) << setiosflags(ios::left) << factorial(i) << endl;
    }
    return 0;
}


unsigned long factorial(unsigned long num)
{
    if(num == 0) 
        return 1;
    else 
        return num * factorial(num -1);
       
}

unsigned long fibonachi(unsigned long num)
{
    if(num == 0 | num == 1) 
        return num;
    else
        return fibonachi(num - 1) + fibonachi(num - 2);
}
    
    




#include <iostream>

using namespace std;

ostream& bell(ostream& output)
{
    return output << '\a' ;
}
ostream& ret(ostream& output)
{
    return output << '\r' ;
}
ostream& tab(ostream& output)
{
    return output << '\t' ;
}
ostream& endline(ostream& output)
{
    return output << '\n' << flush;
}


int main(){

    cout << "this is onec chance" << endline 
         << 'a' << tab << 'b' << tab << 'c' << endline
         << bell << "fjkdhkfjhdas"
         << ret << ".........." << endline; 
    
    return 0;
}
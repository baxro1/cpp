#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int *p;
    int y = 0; 
    p = &y;
    //cin >> *p;
    // cout << *p 
    // when don't assignment get error
    cout << p << setw(10) << &y << setw(4) << *p;

    return 0;
}

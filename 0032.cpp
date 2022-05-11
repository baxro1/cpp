#include <iostream>

using namespace std;

int main()
{
    const int unit = 10;
    int a[unit] = {0};
    int *ptr_a = a;
    ptrdiff_t t = &a[10] - &a[2]; // ptrdiff_t now i know what is it
    cout << t << endl             // use array instead of pointer and revers
         << *(a+2) << endl
         << ptr_a[2] << endl
         << *(ptr_a + 2) << endl;
        
    return 0;
}

#include <iostream>
#include <iomanip>

// assign object to object in cpp
using namespace std;

class temp{
public:
    temp(int = 1,int = 2,int =3);
    void pr();

private:
    int data ;
    int da;
    int d;
};

int main()
{
    temp t1(10,20,32),t2;
    t1.pr();
    cout << "\n print t2 \n" ;
    t2.pr();
    cout << endl;
    t2 = t1;
    t2.pr();
    return 0;
}

inline temp::temp(int a,int b,int c)
{
    this->data = a;
    this->da = b;
    this->d = c;
}

void temp::pr()
{
    cout << this->data << setw(4)
         << this->da << setw(4)
         << this->d;
}

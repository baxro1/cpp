#include <iostream>

using namespace std;

class test{
public:
    test(int = 0);
    void printf() const;
private:
    int x;
};
test::test(int a)
{
    x = a;
    return;
}
void test::printf()const
{   
    // how we can use "this" as a pointer to current object
    cout << "x :" << x << endl
         << "this->x :" << this->x << endl
         << "(*this).x :" << (*this).x << endl;
}


int main()
{
    const test t(10);
    t.printf();
    
//    cout << "Hello world!" << endl;
    return 0;
}

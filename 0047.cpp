#include <iostream>

using namespace std;

class emp{
public:
    emp(){cnt++;}
    ~emp(){cnt--;}
    // we cant access to member's func or data of class and this pointer
    static int getC(){return cnt;} 
    // can't define const this func to get error
private:
    static int cnt;
};
int emp::cnt = 0;

int main()
{
    cout << "count emp:" << emp::getC() << endl;
    emp *e = new emp();
    emp e2();
    cout << "count emp:" << emp::getC() << endl; 
    // the output is cout emp : 1 why? 
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

class time{
public:
   time(){}
private:
};

int main()
{   
    time *t = new time();
    int *arr = new int[10];
    string *str = new string("hellow ali");
    cout << *str << endl;
    delete str;
    delete [] arr;
    delete t;
    cout << "Hello world!" << endl;
    return 0;
}
// use new and delete for dynamic variable
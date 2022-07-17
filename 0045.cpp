#include <iostream>

using namespace std;

class time{
public:
    time(int,int,int);
    time& sets(int);
    time& setm(int);
    time& seth(int);
    time& sett(int,int,int);
    void print()const;
private:
    int s,m,h;
};

time::time(int a,int b,int c)
{
    sett(a,b,c);
    return;
}
time& time::sett(int a,int b,int c)
{
    sets(c);
    setm(b);
    seth(a);
    return *this;
}
time& time::sets(int c)
{
    this->s = c;
    return *this;
}
time& time::setm(int b)
{
    this->m = b;
    return *this;
}
time& time::seth(int a)
{
    this->h = a;
    return *this;
}
void time::print() const
{
    cout << h << ":" << m << ":" << s << endl;
    return;
}


int main()
{
    time t(10,12,35);
    t.print();
    t.sett(9,48,59).print();
    t.seth(14).setm(26).sets(13).print();
    
    cout << "Hello world!" << endl;
    return 0;
}

// sequential Call

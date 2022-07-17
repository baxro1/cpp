#include <iostream>


class time{
public:
    time(int =0,int =1);
    void sett(int =0);
    // const function: to don't change anything
    int rett()const; 
private:
    int a; 
    const int c;
};

// any object access to this func
int time::rett()const
{
    return a;
}

void time::sett(int b)
{
    /* when define const object, as u can see
       the constructor can use to none-const function
        for const object
    */
    this->a = b;
    return;
}

time::time(int b,int b2):c(b2) // special initializer for const member 
{
    //this->c = b2 error: cannot modify a const object
    sett(b);
    return;
}


class alarm{
    friend void setm(alarm &,int);
public:
    alarm(int,int);
    void print_alarm()const;
private:
    const time h;
    time m;
};

alarm::alarm(int th,int tm):h(th),m(tm)
{
    std::cout << "alarm set" << std::endl;
    return;
}

void alarm::print_alarm() const
{
    std::cout << h.rett() << ":"
              << m.rett() << std::endl;
    return;
}

void setm(alarm &thic,int c)
{
    thic.m.sett(c);
}

using namespace std;

int main()
{
    time t1(1);
    // define const object
    const time t2(2); 
    cout << t1.rett() << endl;
    cout << t2.rett() << endl;

    const alarm a(10,12);
    a.print_alarm();

    alarm b(10,8);
    b.print_alarm();
    // define a friend funciton
    setm(b,21);
    b.print_alarm();

    return 0;
}

// freind class and function
// const object and const function
// define object as variable of class
#ifndef TIME1_H 
#define TIME1_H

class Time
{
  public:
    //create
    Time(int h=0,int m=0,int s=0){set_t(h,m,s);} /// for the const object owner func allow to calling to none-const func
    // print
    void print_p()const;
    // set 
    void set_t(int a,int b,int c);
    int &set_hour(int)const;
    void set_m(int);
    void set_s(int s);
    // get
    int get_h();
    int get_m();
    int get_s();
    int get_t()const; // const Time t;
    int get_t();      // Time f; only const object can use the const func and it's a default

  private:
    int h;
    int m;
    int s;
};

#endif
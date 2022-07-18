#ifndef ARRAY1_H
#define ARRAY1_H

#include <iostream>

using namespace std;

class Array{
    friend ostream &operator <<(ostream&,const Array&);
    friend istream &operator >>(istream&,Array&);

public:
    Array(int = 10);
    Array(const Array&);
    ~Array();
    int getSize()const;
    const Array& operator =(const Array &);
    bool operator ==(const Array&) const;
    bool operator !=(const Array& r){ return !(*this == r);}
    int &operator [](int);
    const int& operator [](int)const;
    static int getArraycount();

private:
    int sizet;
    int *ptr;
    static int arraycount;
 };

#endif
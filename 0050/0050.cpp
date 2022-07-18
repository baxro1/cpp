#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <assert.h>
#include "0050.1.h"

using namespace std;

int Array::arraycount = 0;

Array::Array(int arraySize)
{
    sizet = (arraySize > 0 ? arraySize : 10);
    ptr = new int[sizet];
    assert(ptr != 0);
    ++arraycount;

    for(int i=0;i<sizet;i++) ptr[i] = 0;
}

Array::Array(const Array& a):sizet(a.sizet)
{
    ptr = new int[sizet];
    assert(ptr != 0);
    ++arraycount;

    for(int i=0;i<sizet;i++) 
        ptr[i] = a.ptr[i];
}

Array::~Array()
{
    delete [] ptr;
    --arraycount;
}

int Array::getSize() const
{
    return sizet;
}

const Array& Array::operator =(const Array& a)
{
    if( this != &a){
        if(sizet != a.sizet)
        {
            delete [] ptr;
            sizet = a.sizet;
            ptr = new int[sizet];
            assert(ptr != 0);
    
        }   
        for(int i=0;i<sizet;i++) ptr[i] = a.ptr[i];
    }
    return *this;
}

bool Array::operator ==(const Array& a) const
{
    if(sizet != a.sizet)
        return false;

    for(int i=0;i<sizet;i++)
        if(ptr[i] != a.ptr[i])
            return false;
    
    return true;
}

int& Array::operator [](int ss)
{
    assert(0 <= ss && ss <= sizet);
    return ptr[ss];
}
const int& Array::operator [](int ss)const
{
    assert(0 <= ss && ss <= sizet);
    return ptr[ss];
}

istream& operator >>(istream& in,Array& a)
{
    for(int i=0;i<a.sizet;i++)
        in >> a.ptr[i];
    return in;
}
ostream& operator <<(ostream& out,const Array& a)
{
    int i;
    for(i=0;i<a.sizet;i++)
    {
        out << setw(8) << a.ptr[i];
        if((i+1)%4 == 0) out << endl;
    }
    if(i%4) out << endl;
    return out;
}





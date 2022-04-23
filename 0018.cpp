#include <iostream>


using namespace std;

int boxVolume(int l = 1,int w =1,int h = 1);


int main(){

    cout << boxVolume(1,2) << endl
         << boxVolume(3)   << endl
         << boxVolume(2);  

    return 0;
}

int boxVolume(int l,int w,int h)
{
    return l * w * h;
}
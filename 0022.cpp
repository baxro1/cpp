#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int a[10] = {10,2}; // Note: Auto assignment 0 if {num} is less than [num] 
    cout << a[1] << a[2] << endl;
    
    const int r_size = 20 , f_size = 11 ;
    int respone[r_size] = {10,9,2,3,4,5,7,2,3,1,5,7,3,2,6,7,8,2,3,1};
    int frequency[f_size] = {0};
    int j = 0;

    for (int i=0 ; i<r_size ;i++)
    {
        ++frequency[respone[i]];
    }
    cout << "rating" << setw(13) << "frequency" << endl;
    for(int i = 0; i<f_size ;i++)
    {
        cout << setw(6) << i << setw(13) << frequency[i] << endl;
        j += frequency[i];
    }

    cout << " number student : " << j ;
    return 0;
}
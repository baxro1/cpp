#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int sized = 50;
    int coun[7] = {0};
    int arr[sized] = 
        {1,1,1,1,2,1,1,2,3,2,2,
        2,3,3,5,6,5,6,5,4,3,2,
        3,4,5,6,7,3,2,3,2,3,4,
        3,2,3,4,5,6,7,8,7,7,7,
        6,7,8,6,7,7};
    
    
    for(int i=0; i<sized ;i++)
      ++coun[arr[i] - 1];
    
    for(int j=0; j<7 ;j++)
    {
        cout << j+1 << setw(3)<< coun[j] << setw(10);
        for(int k=0; k<coun[j] ;k++) 
        {
            system("color 0a"); // the new experence
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int siz = 10;
    int arrey[siz] = {1,2,3,4,5,6,7,8,9,0};
    int temp;

    for(int i=0; i!=siz ;i++) cout << setw(3) << arrey[i] << endl;

    for(int i=1; i<siz ;i++)
    {
        for(int j=0; j<i ;j++)
        {
            if(arrey[j] > arrey[i])
            {
                temp = arrey[i];
                arrey[i] = arrey[j];
                arrey[j] = temp;
            }
        }
    }
    
    for(int i=0; i<siz ;i++) cout << setw(3) << arrey[i] << endl;

    return 0;
}

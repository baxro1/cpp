#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;


int main(){
    
    string who[2] = {"person one","person tow"} ; 
    int whoam = 0;
    int a_score,b_score ;   
    a_score = b_score = 0;
    int status_code = 0 ;
    
    srand(time(NULL));
    int chance1,chance2 ;

    while(!status_code)

    {
        chance1 = 1 + rand() % 6;
        chance2 = 1 + rand() % 6;
        cout << who[whoam] << endl;
        cin.get();
        cout << chance1 << " + " << chance2 << " = " << chance1 + chance2 << endl;
        switch (chance1 + chance2)
        {
            case 7:
            case 11: 
                {
                   status_code = 1;
                   cout << who[whoam] << " win \n" ;
                }  break;

            case 12:
            case 2:
            case 3: 
                {
                    status_code = 1;
                    cout << who[whoam] << " fail \n" ;
                }   break;

            default: 
                {
                    whoam ? ++a_score: ++b_score;  
                    whoam = !whoam;
                    
                }   break;
                    
                  
            
        }
    }
    
    cout << "score_1 : " << a_score << " score_2 : " << b_score << endl;
    return 0;
}
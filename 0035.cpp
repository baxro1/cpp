#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main()
{
    char a[] = "Good";
    char b[10] = "hi";
    char c[] = "this is a news paper u can see";
    char *wf;

    cout << strcpy(b,a) << endl
         << strncpy(b,a,2) << endl
         << strcat(b,a) << endl
         << strncat(a,b,2) << endl
         << "a " << strcmp(a,b) << " b" << endl
         << "a " << strncmp(b,a,1) << " b" << endl
         << strtok(c," ") << a << b << endl // what do this code?
         << setiosflags(ios::left) << setw(20) << a << strlen(a) << endl
         << setiosflags(ios::left) << setw(20) << b << strlen(b) << endl;

   // wf = strtok(c," ");
   // while(wf != NULL)
   // {
   //     cout << wf << '\n';
   //    wf = strtok(NULL ," ");
   //     
   // }
             

    return 0;
}

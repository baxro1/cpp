#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

class connection{
public:
    connection(int =0,int =0);
    ~connection(){--num;}
    int stat()const ;
    int ret_type() const;
    static void pri_num();

private:
    static int num;
    int status;
    int type;
};
connection::connection(int t,int s):status(s),type(t)
{
    cout << "define a new connection " << this << endl;
    num++;
}

int connection::stat()const 
{
    return status;
}
int connection::ret_type()const
{
    return type;
}
void connection::pri_num()
{
    cout << "num sockets: " << num << endl;
}


class socket: public connection{
public:
    socket(int,int,int,int);
    ~socket();
    int getIS()const;
    int getID()const;
    int getCH()const;

private:
    int ip_sou;
    int ip_des;
    int port;
};

socket::socket(int t,int is,int id,int st):connection(t,st)
{
    ip_sou = is;
    ip_des = id;
    
    cout << setiosflags(ios::left)
         << setw(15) << "source ip:" << ip_sou
         << endl
         << setw(15) << "destination ip:" << ip_des
         << endl
         << "port for connectio: ";
    cin >> port;
    cout << "connectiog..." << endl;
    sleep(2);
}
socket::~socket()
{
    cout << "\n disconnect ..." 
         << endl
         << "source ip: " << setw(10) << ip_sou << ":" << port
         << endl
         << "destination ip: " << setw(10) << ip_des
         << endl;
         
}
int socket::getCH()const
{
    int temp = stat();
    if(temp) return temp;
    
    return -1; 
}
int socket::getID()const
{
    return ip_des;
}
int socket::getIS()const
{
    return ip_sou;
}

int connection::num = 0;

int main(){

    socket *con = new socket(1,19201680101,19201680102,1);
    
    connection::pri_num();
    cout << "your new connection stat is: " << con->getCH();
    delete con;
    connection::pri_num();
     

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

class Phonenumber{
    friend ostream& operator <<(ostream&,const Phonenumber&);
    friend istream& operator >>(istream&,Phonenumber&);
private:
    char areaCode[4];
    char exchange[4];
    char line[5];
};

ostream& operator <<(ostream& output, const Phonenumber& num)
{
    output << "(" << num.areaCode << ") "
           << num.exchange << "-" << num.line;
    return output;
}

istream& operator >>(istream& input,Phonenumber& num)
{
    input.ignore();
    input >> setw(4) >> num.areaCode;
    input.ignore(2);
    input >> setw(4) >> num.exchange;
    input.ignore();
    input >> setw(5) >> num.line;
    return input;
}


int main()
{
    Phonenumber Phone;
    bool i= true;
    while(i)
    {
    cin >> Phone;
    cout << Phone;
    cin >> i;
    }
    //cout << "Hello world!" << endl;
    return 0;
}

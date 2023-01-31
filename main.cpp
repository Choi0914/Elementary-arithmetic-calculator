#include <iostream>
#include <string>

using namespace std;

int main()
{

    string mark;
    string fstnum;
    string sign;
    string scdnum;

    while(1)
    {
        getline(cin, mark, ' ');
        if(mark == "quit")
        {
            cout<<"quit this program"<<endl;
            break;
        }
        getline(cin, fstnum, ' ');
        getline(cin, sign, ' ');
        getline(cin, scdnum);

        if(mark == "?")
        {
            if(sign == "+")
            {
                cout<<fstnum<<" + "<<scdnum<<" = "<<stoi(fstnum) + stoi(scdnum)<<endl;
            }
            else if(sign == "-")
            {
                cout<<fstnum<<" - "<<scdnum<<" = "<<stoi(fstnum) - stoi(scdnum)<<endl;
            }
            if(sign == "*")
            {
                cout<<fstnum<<" * "<<scdnum<<" = "<<stoi(fstnum) * stoi(scdnum)<<endl;
            }
            if(sign == "/")
            {
                cout<<fstnum<<" / "<<scdnum<<" = "<<stoi(fstnum) / stoi(scdnum)<<endl;
            }
        }
    }

}

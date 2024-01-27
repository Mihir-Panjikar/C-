#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char i[3]=" ";
    cout<<setw(9)<<setfill('^')<<i<<"\b"<<"PERIODICALTEST3"<<setw(9)<<setfill('^')<<i;
}
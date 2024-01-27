/*
Define a class Batsman with complete definitions in C++ with the following descriptin: (March 2017)

Private:

Bcode-type int
Bname-character array of size 20
Innings-type int
Notouts-type int
Run-type int
Batavg-of type float

A member function calcavg() to compute Batavg using the formula: Batavg=Run/(Innings-Notouts)

Public:

A function Readdata() to accept values for Bcode, Bname, Innings, Notout and Run.
A functionDisplaydata() to invoke the function calcavg() and display all the data members on the screen.

Write a function main() to call necessary functions.
*/

#include<iostream>
using namespace std;

class batsman
{
    private:
    
    int Bcode;
    char Bname[20];
    int innings;
    int notouts;
    int run;
    float batavg=0;
    
    float calavg()
    {
        batavg=(run/(innings-notouts));
        return batavg;
    }

    public: float Read_data()
    {
        cout<<"Enter the Bcode,Bname,innings,notouts and run"<<endl;
        cin>>Bcode>>Bname>>innings>>notouts>>run;
    }

    public: int Display_data()
    {
        cout<<endl<<endl;
        cout<<"Batsman code: "<<Bcode<<endl;
        cout<<"Batsman name: "<<Bname<<endl;
        cout<<"innings played: "<<innings<<endl;
        cout<<"notouts : "<<notouts<<endl;
        cout<<"runs scored: "<<run<<endl;

        batavg=calavg();
        cout<<"Batsman average: "<<batavg<<endl;
    }
};

int main()
{
    batsman bat1;

    bat1.Read_data();
    bat1.Display_data();
}
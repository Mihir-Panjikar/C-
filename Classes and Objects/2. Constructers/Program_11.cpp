/*
A class Clock has the following members:

Private data members:

● Hour of type integer
● Minute of type integer

Public member functions:

● A parameterised constructor to initialise both the data members.
● Showtime() - function to display time
● Add time (Clock T1, Clock T2)- function to add two clock objects T1 and T2.

Write a program to input two different objects FT and ST, and display their sum.

For example:
Input: FT= 6 hours 35 minutes
       ST= 3 hours 45 minutes

Output: T = FT + ST= 10 hours 20 minutes
*/

#include<iostream>
using namespace std;

class CALC
{
    int fortnight;
    int days;
    
    public:

    CALC(int x,int y)
    {
       fortnight=x;
       days=y; 
    }

    int Sum(CALC FT,CALC ST)
    {
        fortnight=FT.fortnight+ST.fortnight;
        days=FT.days+ST.days;
        fortnight+=days/60;
        days%=60;

        return fortnight && days;
    }

    int show_time()
    {
        cout<<"Hours: "<<fortnight<<endl;
        cout<<"Minutes: "<<days<<endl;
        cout<<endl;
    }
};

int main()
{
    int H1,M1,H2,M2,H3,M3;

    cout<<"Enter time for First Time"<<endl;
    cout<<"Hours: ";
    cin>>H1;
    cout<<"Minutes: ";
    cin>>M1;
    cout<<endl<<endl;

    cout<<"Enter time for Second Time"<<endl;
    cout<<"Hours: ";
    cin>>H2;
    cout<<"Minutes: ";
    cin>>M2;
    cout<<endl<<endl;

    CALC FT(H1,M1);
    CALC ST(H2,M2);
    CALC T(H3,M3);

    T:T.Sum(FT,ST);

    cout<<"Time entered for First Time"<<endl;
    FT.show_time();
    cout<<"Time entered for Second Time"<<endl;
    ST.show_time();
    cout<<"Total Time"<<endl;
    T.show_time();

}
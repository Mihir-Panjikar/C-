/*
Define a class named CALC with the following specfications

Private:

1)fortnight of type integer
2)days of type integer
3)Define a member function getdata which accepts values for all the data members
4)Define a member function sum() which accepts two objects as parameters and initialises
  data members of the third object as per the summation of fortnight of both the objects (referexamplebelow)
5)Define a member function show() to display values of data members of all the objects.
  Further write appropriate main() function.

Note:-A fortnight is equal to 14 days

Example
If obj1 is 2 fortnight 9 days
   obj2 is 3 fortnight 8 days
   obj3 is 6 fortnight 3 days 
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

    int sum(CALC C1,CALC C2)
    {
        fortnight=C1.fortnight+C2.fortnight;
        days=C1.days+C2.days;
        fortnight+=days/14;
        days%=14;

        return fortnight && days;
    }

    void show()
    {
        cout<<"Fortnight: "<<fortnight<<endl;
        cout<<"Days: "<<days<<endl;
        cout<<endl;
    }
};

int main()
{
    int F1,D1,F2,D2,F3,D3;

    cout<<"Enter Days for First Fortnight"<<endl;
    cout<<"Fortnight: ";
    cin>>F1;
    cout<<"Days: ";
    cin>>D1;
    cout<<endl<<endl;

    cout<<"Enter Days for Second Fortnight"<<endl;
    cout<<"Fortnight: ";
    cin>>F2;
    cout<<"Days: ";
    cin>>D2;
    cout<<endl<<endl;

    CALC C1(F1,D1);
    CALC C2(F2,D2);
    CALC C3(F3,D3);

    C3:C3.sum(C1,C2);

    cout<<"Entered for First Fortnight"<<endl;
    C1.show();
    cout<<"Entered for Second Fortnight"<<endl;
    C2.show();
    cout<<"Total Fortnights"<<endl;
    C3.show();

}
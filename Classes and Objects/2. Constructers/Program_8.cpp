/*
Define a class MOBILE with the following specifications:
Private members:
 
Model_no              Integer  type
Price                 float(Price per mobile handset)
No_of_units           Integer
Total_amount          float

Totalcost():A function to calculate the Total_amount for N number  of mobile handsets.
 
Public members:

A constructor to assign initial values of Model_no as 0001, Price as 0, No_of_units as 0 and Total_amount as 0
Input() -  A function to read Model_no, Price, No_of_units and call Totalcost()  to calculate the total cost.
View() – A function to view all data members.

Write main() to create object and call necessary functions.
*/

#include<iostream>
using namespace std;

class MOBILE
{
    int Model_no;
    float Price;
    int No_of_units;
    float Total_cost;

    float Totacost()
    { 
        return (Price*No_of_units);
    }

    public:

    MOBILE()
    {
        Model_no=0001;
        Price=0;
        No_of_units=0;
        Total_cost=0;
    }

    int input()
    {
        cout<<"Enter the Model no,Price and no. of units "<<endl;
        cin>>Model_no>>Price>>No_of_units;

        Total_cost=Totacost();
    }

    int View()
    {
        cout<<endl<<endl;
        cout<<"Model no: "<<Model_no<<endl;
        cout<<"Price: "<<Price<<endl;
        cout<<"No. of units: "<<No_of_units<<endl;
        cout<<"Total Cost: "<<Total_cost<<endl;
    }
};


int main()
{
    MOBILE M1;

    M1.input();
    M1.View();
}
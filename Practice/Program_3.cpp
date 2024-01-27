/*
Define a class Tour in C++ with the description given below.

Private members:
Tcode of type string
Noofadults of type integer
Noofkids of type integer
Distance of type integer
Totalfare of type float

Public members:
A constructor to assign initial values as follows:
Tcode with the word “NULL”
Noofadults as 0
Distance as 0
Totalfare as 0

A function assignfare() which calculates and assigns the values of the data member totalfare as follows:

Fare(Rs.)   For distance(km)
500         >=1000
300         <1000 & >=500
200         <500

For each child the above fare will be 50% of the fare mentioned in the above table.

For ex:
If distance is 750, Noofadults= 3 and Noofkids=2

Then totalfare should becalculated as

Noofadults * 300 + Noofkids * 150 i.e. 3 * 300 + 2 * 150=1200

A function Entertravel() to input the values of the datamembers Tcode, Noofadults, Noofkids and
Distance and invoke the assignfare() function.

A function showtravel() which displays the content of all the data members for a Tour.
*/

#include<iostream>
using namespace std;

class Tour
{
    string Tcode;
    int No_of_adults;
    int No_of_kids;
    int Distance;
    float Total_fare;

    public:

    Tour()
    {
        Tcode="NULL";
        No_of_adults=0;
        No_of_kids=0;
        Distance=0;
        Total_fare=0;
    }

    int assign_fare()
    {
        if(Distance>=1000)
        Total_fare=(No_of_adults*500)+(No_of_kids*250);

        else if(Distance<1000 && Distance>=500)
        Total_fare=(No_of_adults*300)+(No_of_kids*150);

        else if (Distance<500)
        Total_fare=(No_of_adults*200)+(No_of_kids*100);
        
        return Total_fare;
    }

    int Enter_travel()
    {
        cout<<"Enter the values of Tcode, No. of adults, No. of kids and Distance"<<endl;
        cin>>Tcode>>No_of_adults>>No_of_kids>>Distance;
    }

    void show_travel()
    {
        cout<<endl<<endl;
        cout<<"Travel code: "<<Tcode<<endl;
        cout<<"No of adults: "<<No_of_adults<<endl;
        cout<<"No of kids: "<<No_of_kids<<endl;
        cout<<"Distance: "<<Distance<<endl;
        cout<<"Total fare: "<<assign_fare()<<endl;
    }
};

int main()
{
    Tour T1;

    T1.Enter_travel();
    T1.show_travel();
}
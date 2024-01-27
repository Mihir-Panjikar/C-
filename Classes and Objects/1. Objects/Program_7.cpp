/*
Define a class GST with the following descriptions

Private members

Item_name 20 characters
amt float.
tax_amt float

A member function assigngst() to calculate and assign tax_amt as per the following chart.

Amount                           Tax

Amount Less than 1000            5%
Amount between 1000 and 5000    18%
Amount 5000                     28%

Public members:

enter()-A function to read Item_name,amt and call assigngst() to assign the tax_amt.
display()-A function to view the contents of all the data members.
Write main() to create object and call necessary functions

*/
#include<iostream>
#include<string.h>
using  namespace std;

class GST
{
    char Item_name[20];
    float amt;
    float tax_amt;

    int assigngst()
    {
        if(amt<1000)
        tax_amt=((amt/100)*5);
        
        else if(amt>1000 && amt<5000)
        tax_amt=((amt/100)*18);
        
        else if(amt>=5000)
        tax_amt=((amt/100)*28);
    }

    public:

    int read()
    {
        cout<<"Enter the item name,amount"<<endl;
        cin>>Item_name;
        cin>>amt;

        assigngst();
    }
    
    void display()
    {
        cout<<endl<<endl;
        cout<<"Item name: "<<Item_name<<endl;
        cout<<"Amount: "<<amt<<endl;
        cout<<"Tax amount: "<<tax_amt<<endl;
    }
};

int main()
{
    GST tax1;

    tax1.read();
    tax1.display();
}
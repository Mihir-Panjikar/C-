/*
Define a class Employee with the following specifications:

Private members:

Empno: of type integer
Ename: array of 20 characters
Basic, hra, da: of type float
Netpay: of type float

calculate(): A function to find Basic + hra+ da with float return type

Public member functions:

havedata(): function to accept values for empno, ename, basic, hra, da and 
            invoke calculate() to calculate netpay.

Displaydata(): function to display all data members on the screen.

Write only the function definitions.
*/

#include<iostream>
using namespace std;

class Employee
{
    int Empno;
    char Ename[20];
    float Basic,hra,da;
    float Netpay;

    float calculate(float basic,float hra,float da)
    {
        return Basic+hra+da;
    }

    public:

    int havedata()
    {
        cout<<"Enter Employee number, employee name, Basic, hra, da"<<endl;
        cin>>Empno;
        cin>>Ename;
        cin>>Basic>>hra>>da;
        
        Netpay=calculate(Basic,hra,da);
    }

    int Displaydata()
    {
        cout<<endl<<endl;
        cout<<"Employee Number: "<<Empno<<endl;
        cout<<"Employee Name: "<<Ename<<endl;
        cout<<"Basic: "<<Basic<<endl;
        cout<<"House Rent Allowance: "<<hra<<endl;
        cout<<"Daily Allowance: "<<da<<endl;
        cout<<"Netpay: "<<Netpay<<endl;
    }
};

int main()
{
    Employee E1;

    E1.havedata();
    E1.Displaydata();

}
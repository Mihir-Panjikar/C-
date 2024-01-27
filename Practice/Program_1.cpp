/*
Declare an abstract class named “employee” which has the following members(2009)
i) empno- of type integer under private visibility label
ii) Define a constructor to initialize the data member empno
iii)display()- a function under public visibility label to display the data member empno.

Derive a class named “salary” from class “employee” in public mode. It has the following members.
i)netsal –of type float under protected visibility label
ii)basic—of type integer under protected visibility label
iii)display()—a function under public visibility label display data members basic and netsal.
iv)Define a constructor to initilaize the data member basic 
   and calculate netsal=basic + 0.50 * basic +0.20 basic.

Write a main program to accept the input and pass it as arguments to an appropriate constructor.
Also display at the data member of both the classes.

*/

#include<iostream>
using namespace std; 

class employee
{
    int empno;

    public:
    
    employee(int x)
    {
        empno=x;
    }

    void display()
    {
        cout<<"empno: "<<empno<<endl;
    }
};


class salary: public employee
{
    protected:

    float netsal;
    int basic;

    public:

    void display()
    {
        cout<<"Basic: "<<basic<<endl;
        cout<<"netsal: "<<netsal<<endl;
    }

    salary(int x,int y): employee(x)
    {
        int basic=y;

        netsal=basic+0.50*basic+0.20*basic;
    }
};

int main()
{
    salary emp(2001,10000);

    emp.employee::display();
    emp.salary::display();
}
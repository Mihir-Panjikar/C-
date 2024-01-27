/*
Declare an abstract class named customer which has the following members:
1)cno:of type integer under private visibility label
2)display() a function under protected visibility label to display data membercno
3)Define a constructor to initialise the data member cno

Derive a class named account from customer under protected mode which has the following members:
1)deposit:of type integer under private visibility label
2)intr:of type float under private visibility label
3)Display(): a function under protected visibility label to display the data members intr and deposit.
4)Define a constructorto initialise data member deposit and set intr with computed value as deposit*0.053

Derive a class named named person from account under protected mode.It has the following members:
1)Name:a character array of size 30 under private visibility label
2)display() a function under protected visibility label to display the data member name.
3)Define a constructorto initialise the data member name.

Write a main program to create an object of class person to initialise data members of
all classes. Use the same object to display the data members of all the classes.

*/

#include<iostream>
#include<string.h>
using namespace std;

class customer
{
    int cno;

    protected: void display()
    {
        cout<<cno;
    }

    public:

    customer(int x)
    {
        cno=x;
        display();
    }
};

class account: protected customer
{
    int deposit;
    float intr;

    protected: void display()
    {
        cout<<deposit<<intr;
    }

    public:

    account(int x,int y,int z):customer(x)
    {
        deposit=y;
        intr=z;
        display();
    }
};

class person: protected account
{
    char name[30];

    protected: void display()
    {
        cout<<name;
    }

    public:
    
    person(int x,int y,int z,char *nam):account(x,y,z)
    {
        strcpy(name,nam);
        display();
    }
};

int main()
{
    person c(1002,3000,5,"Robert");
}
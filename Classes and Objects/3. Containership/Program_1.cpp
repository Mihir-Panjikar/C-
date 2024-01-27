/*
Declare an abstract class “Bank ”consisting of the following members:
i)custno:of type integer under private visisbility label
ii)Define a constructor to initialize data member custno
iii)display()-a function under public visibility label to display data member custno 

Declare an abstract class named account consisting of the following memebers: 
i)deposit:of type integer under private visibility label
ii)Define a constructor to initialize data member deposit.
iii)display()-a function under public visibility label to display data memebr deposit. 

Declare a class named customer consisting of the following members:
i)a of type bank under private visibility label.
ii)b of type account under private visibility label
iii)name a character array of size 30 under private visibility labe;
iv)define a constructor to initialize the data member name
v)display() a function under protected visibility label to display the data member name.

Write a main program to accept the input values and send it as arguments to an appropriate
constructor.Also display the data members of all the classes.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
    int custno;
    
    public:

    Bank(int x)
    {
        custno=x;
        display();
    }

    void display()
    {
        cout<<custno;
    }
    
};

class account
{
    int deposit;

    public:

    account(int y)
    {
        deposit=y;
        display();
    }

    void display()
    {
        cout<<deposit;
    }

};

class customer
{
    Bank a;
    account b;

    char name[30];

    public:
    customer(int x,int y,char *nam):a(x),b(y)
    {
        strcpy(name,nam);
        display();
    }

    void display()
    {
        cout<<name;
    }

};

int main()
{
    customer c(1000,3000,"jack");
}
/*
Declare an abstract class named customer which has the following members:
1)cno:of type integer under private visibility label.
2)display():a function under public visibility label to display data member cno.
3)Define a constructor to initialise the data member cno.

Declare an abstract class named account which has the following members:
1)Deposit: of type integer under private visibility label.
2)display();a function under public visibility label to display data member deposit.
3)Define a constructor to initialise data member deposit.

Declare a class named person which has the following members:
1)a:of type customer under private visibility label.
2)b of type account under private visibility label.
3)name a character array of size 30 under private visibility label.
4)Define a constructor to initialise the data member name.
5)display() a function under protected visibility label to display the data member name.

Write a main program to create an object of class person to initialise data
members of all classes.Also display the data members of all classes.
*/

#include<iostream>
#include<string.h>
using namespace std;

class customer
{
    int cno;

    public: 
    
    void display()
    {
        cout<<cno<<endl;
    }

    customer(int x)
    {
        cno=x;
        display();
    }

};

class account
{
    int deposit;

    public:

    void display()
    {
        cout<<deposit<<endl;
    }

    account(int y)
    {
        deposit=y;
        display();
    }
};

class person
{
    customer a;
    account b;

    char name[30];

    public:

    person(int x,int y,char *nam):a(x),b(y)
    {
        strcpy(name,nam);
        display();
    }

    protected: void display()
    {
        cout<<name<<endl;
    }
};

int main()
{
    person c(1000,5000,"john");
}

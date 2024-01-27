/*
C++ program on multi level

Declare an abstract class named STUDENT which has the following members:
i) roll: of type integer under private visibility label
ii) display(): a function under protected visibility label to display value of data member roll.
iii) Define a parameterized constructor to initialize data member roll.

Derive a class named SCHOOL from class STUDENT under protected mode and has the following members:
i) sname: a character array of size 30 under private visibility label
ii) display(): a function under protected visibility label to display value of data member sname.
iii) Define a parameterized constructor to initialize data member sname.

Derive a class named RESULT from class SCHOOL under protected mode and has the following members:
i) percent: of type float under private visibility label
ii) display(): a function under protected visibility label to display data member percent.
iii) Define a parameterized constructor which initializes data member percent.

Write a relevant main program to create an object of type RESULT to initialize data
members of all classes. Use the same object to display the data members of all classes.
*/

#include<iostream>
#include<string.h>
using namespace std;

class STUDENT
{
    int roll;

    protected: int display()
    {
        cout<<"Roll no: "<<roll<<endl;
    }

    public: STUDENT(int rol)
    {
        roll=rol;
    }

};

class SCHOOL: protected STUDENT
{
    char sname[30];
    
    protected: int display()
    {
        cout<<"Student name: "<<sname<<endl;
    }

    public: SCHOOL(int rol,char snam[30]): STUDENT(rol)
    {
        strcpy(sname,snam);
    }

};

class RESULT: protected SCHOOL
{
    float percent;

    protected: int display()
    {
        cout<<"Percent: "<<percent<<endl;
    }

    public: RESULT(int rol,char *snam,float percen): SCHOOL(rol,snam)
    {
        percent=percen;
        cout<<endl;
        STUDENT::display();
        SCHOOL::display();
        display();
    }


};

int main()
{
    int roll_no;
    char name[30];
    float percent;

    cout<<"Enter Roll no: ";
    cin>>roll_no;
    cout<<endl;

    cout<<"Enter Student name: ";
    cin>>name;
    cout<<endl;

    cout<<"Enter Percentage: ";
    cin>>percent;

    RESULT S1(roll_no,name,percent);

}
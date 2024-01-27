/*
Declare an abstract class named “University” consisting of the following members:
i) Ucode: of type integer under private visibility label
ii) Uname: of type character, size 30, under private visibility label
iii) A parameterized constructor to initialise ucode and uname.
iv)Show(): a function to display the data members, under the public visibility label.

Declare another abstract class named “Department” consisting of the following members:
i)Dname: of type character , size 20, under private visibility label
ii) A parameterized constructor to initialise Dname.
iii)Show() a function to display the data members, under public visibility label.

Derive a class called “HOD” publicly from “University” and also publicly from “Department”. The
class “HOD” consists of the following members:
i) Name: of type character size 25 under private visibility
ii) A parameterized constructor to initilaize the data members.
iii) Show()a function to display the data members, under the public visibility label.

Write main function to declare an object and call the necessary functions in such a way that for input:

10248 (University code i.i. Ucode)
Goa University (University name i.i. Uname)
Computer Science (Department name i.i. dname)
Shailesh Kamat (HOD name i.e. name)

The output should be displayed in the following format:
University code: 10248
University name: Goa University
Department : Computer Science
HOD : Shailesh kamat
*/

#include<iostream>
#include<string.h>
using namespace std;

class University
{
    int Ucode;
    char Uname[30];

    public:

    University(int x,char *nam)
    {
        Ucode=x;
        strcpy(Uname,nam);
    }

    void Show()
    {
        cout<<"University code: "<<Ucode<<endl;
        cout<<"University name: "<<Uname<<endl;
    }

};

class Department
{
    char Dname[20];

    public:
    
    Department(char *nam)
    {
        strcpy(Dname,nam);
    }

    void Show()
    {
        cout<<"Department name: "<<Dname<<endl;
    }
    
};

class HOD: public University,public Department
{
    char Name[25];

    public:

    HOD(int x,char *nam1,char *nam2, char *nam3):University(x,nam1),Department(nam2)
    {
        strcpy(Name,nam3);
    }

    void Show()
    {
        cout<<"HOD: "<<Name<<endl;
    }
};

int main()
{
    HOD U1(10248,"Goa University","Computer Science","Shailesh Kamat");

    U1.University::Show();
    U1.Department::Show();
    U1.HOD::Show();

}
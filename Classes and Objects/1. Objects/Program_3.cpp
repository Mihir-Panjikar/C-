/*
Define a class Report in C++ with the following description.

Private members:

Stream array of 10 characters
Rno of type integer
Name array of 30 characters
Div 01 character
Grade 01 character
Remark array of 30 characters

Getremark( ) function which assigns remark based on the following conditions.

Remarks                    Condition

“Quality for next class”   If student secures a grade from ‘A’ to ‘G’

“Needs improvement”        If student secures ‘H’or ‘I’ grade

Public:

Input( ) function to ask and store the value of rno, name, class, div, grade and
called getremark() function to assign remark.

Display( ) function to display all the data members neatly and clearly.

*/

#include<iostream>
using namespace std;

class Report
{
    private:
    char stream[10];
    int Rno;
    char Name[30];
    char Div;
    char Grade;
    string Remark;

    void Getremark(char G)
    {
        if(Grade=='A' || Grade=='B' || Grade=='C' || Grade=='D' || Grade=='E' || Grade=='F' || Grade=='G')
        {
            Remark="Qualifies for next class";
        }
        else
        {
            Remark="Needs Improvement";
        }
    }

    public: int Input()
    {
        cout<<"Enter the roll no,name,div and grade of the student"<<endl;
        cin>>Rno>>Name>>Div>>Grade;
        
        Getremark(Grade);
    }

    public: int Display()
    {
        cout<<endl<<endl;
        cout<<"Roll no : "<<Rno<<endl;
        cout<<"Name of the student : "<<Name<<endl;
        cout<<"Division : "<<Div<<endl;
        cout<<"Grade : "<<Grade<<endl;
        cout<<"Remark : "<<Remark<<endl;

    }

};

int main()
{
    Report stu1;

    stu1.Input();
    stu1.Display();

}
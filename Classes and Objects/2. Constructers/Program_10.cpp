/*
Define a class Applicant in c++ with the following description:

Private members:
A data member ANo (admission number) of type long.
A data member Name of type string.
A data member Agg(aggregate marks) of type float
A data member Grade of type  char.

A data member function GradeMe() to find the Grade as per the aggregate marks obtained by the student.

Equivalent aggregate marks range and the respective grades are  as follows:

Aggregate Marks             Grade
>=80                        A
<80 and >=65                B
<65 and >=50                C
<50                         D

Public members:

A default constructor to initialise the following default values i.e. ANo and Agg to zero, Name and Grade to blank.
A function Enter() to allow user to enter values for ANo, Name, Agg and call  function GradeMe() to find the Grade.
A  function result() to allow user to view the contents of all the data members.

Write main() to declare an object and call the necessary functions.

*/

#include<iostream>
using namespace std;

class Applicant
{
    long ANo;
    string Name;
    float Agg;
    char Grade;

    char GradeMe(float Agg)
    {
        if(Agg>=80)
        Grade='A';

        else if(Agg<80 && Agg>=65)
        Grade='B';

        else if(Agg<65 && Agg>=50)
        Grade='C';
        
        else if(Agg<50)
        Grade='D';

        return Grade;
    }

    public:

    Applicant()
    {
        ANo=0;
        Agg=0;
        Name=" ";
        Grade=' ';
    }

    int Enter()
    {
        cout<<"Enter Admission number,Name,Aggregate marks"<<endl;
        cin>>ANo;
        cin>>Name;
        cin>>Agg;
        Grade=GradeMe(Agg);
    }

    int result()
    {
        cout<<endl<<endl;
        cout<<"Admission Number: "<<ANo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Aggregate Marks: "<<Agg<<endl;
        cout<<"Grade: "<<Grade<<endl;
    }

};

int main()
{
    Applicant A1;

    A1.Enter();
    A1.result();
}
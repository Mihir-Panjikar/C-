/*
Define a class “Teacher” in C++ with  the following description:

· Name - a character array of size 20
· Address - a character array  of size 20
· Qualification - a character array of size 5
· Age - of type integer
· Salary - of type float
· A function compute() that computes the salary of the teacher according to the qualification 
  as per the following details.
 
Qualification        Salary
G                    30,500
PG                   50,500
 
For teachers other than the above mentioned qualification, salary should be 20,000.
For teachers above the age of 50 should begiven additional 10% of salary as bonus.
 
Public:

A constructor  to assign the values of Name, Address, Qualification and Age passed as parameters to it.
 
A function Display()  which invokes the function compute() and displays all the data values.

*/

#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Teacher
{
    char Name[20];
    char Address[20];
    char Qualifications[5];
    int Age;
    float salary;

    float compute(char qualifications[5],int age)
    {
        if(strcmp(qualifications,"G")==0)
        {
            salary=30500;
        }
        
        else if(strcmp(qualifications,"PG")==0)
        {
            salary=50500;
        }

        else
        {
            salary=20000;
        }

        if(age>50)
        {
            salary=salary+(0.1*salary);
        }

        return salary;
    }

    public: Teacher(char name[20],char add[20],char q[5],int j) 
    {
        strcpy(Name,name);
        strcpy(Address,add);
        strcpy(Qualifications,q);
        Age=j;
    }

    public: int Display()
    {
        cout<<endl<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Address: "<<Address<<endl;
        cout<<"Qualifications: "<<Qualifications<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Salary: "<<compute(Qualifications,Age)<<endl;
    }

};

int main()
{
    char name[20];
    char Address[20];
    char Qualifications[5];
    int Age;
    
    cout<<"Enter the name,address,qualifications and age of the teacher"<<endl;
    gets(name);
    gets(Address);
    gets(Qualifications);
    cin>>Age;

    Teacher T1(name,Address,Qualifications,Age);

    T1.Display();
}
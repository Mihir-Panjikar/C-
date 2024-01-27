/*
Write a C++ program to create a class called Student. Read and print N student's details( Name, age, rollno).
*/

#include<iostream>
using namespace std;

class Student
{
    public:

    string Name;
    int age;
    int rollno;

    int Read()
    {
        cout<<"Enter the name,age and rollno of the student"<<endl;
        cin>>Name>>age>>rollno;
        cout<<endl<<endl;
    }

    int Display()
    {
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll no: "<<rollno<<endl;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of students"<<endl;
    cin>>n;
    Student S1[n];
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        S1[i].Read();  
    }

    for(int i=0;i<n;i++)
    {
        S1[i].Display();
        cout<<endl;
    }
}
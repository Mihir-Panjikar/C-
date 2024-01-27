/*
C++ program on containership

Declare a class DEPARTMENT consisting of the following members:
i) name: a character array of size 30 under private visibility label
ii) a parameterized constructor to initialize data member name.

Declare a class SALARY consisting of the following members:
i) pay: of type float under private visibility label
ii) a parameterized constructor to initialize data member pay

Declare class EMPLOYEE with following data members:
i) EMPID: of type integer under protected visibility label
ii) d: of type DEPARTMENT under protected visibility label
iii) s: of type SALARY under protected visibility label
iv) a parameterized constructor to initialize value of EMPID and display all the 
data members of all the classes.

Write a main function to create object of class EMPLOYEE to input and display
all the data members of all classes.
*/

#include<iostream>
#include<string.h>
using namespace std;

class DEPARTMENT
{
    char name[30];

    public:

    DEPARTMENT(char nam[30])
    {
        strcpy(name,nam);      
    }
};

class SALARY
{
    float pay;

    public:

    SALARY(float pa)
    {
        pay=pa;
    }
};

class EMPLOYEE
{
    protected:

    int EMPID;
    DEPARTMENT d;
    SALARY s;
    
    public:

    EMPLOYEE(char *nam,float pa,int EMP):d(nam),s(pa)
    {
        EMPID=EMP;

        cout<<"Employee Name :"<<nam<<endl;
        cout<<"Employee Salary :"<<pa<<endl;
        cout<<"Employee ID :"<<EMPID<<endl;

    }
    

};

int main()
{   
    int EMP;

    char nam[30];
    float pa;

    cout<<"Enter Employee name :";
    cin>>nam;
    cout<<endl;

    cout<<"Enter Employee salary :";
    cin>>pa;
    cout<<endl;

    cout<<"Enter employee ID: ";
    cin>>EMP;
    cout<<endl;
    
    EMPLOYEE E1(nam,pa,EMP);

}


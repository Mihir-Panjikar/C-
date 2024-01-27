/*

Define a class Test in C++ with the following description:

Private members:
testCode of type integer
description of type string
noCandidate of type integer
centerRead (number of centers required) of type integer

A member function calcntr() to calculalte and return the number of centers as
(NoCandidate/100 + 1)

Public members:

A function schedule() to allow user to enter values for testcode, description,
noCandidate and call function calcntr() to calculate the number of centers.

A function disptest() to allow user to view the content of all the data members .

*/

#include<iostream>
using namespace std;

class Test
{
    int testcode;
    string description;
    int noCandidate;
    int centerReq;
    
    int calcntr()
    {
        return ((noCandidate/100)+1);
    }

    public: int schedule()
    {
        cout<<"Enter the values for testcode,description,no.candidate and centerReq"<<endl;
        cin>>testcode>>description>>noCandidate>>centerReq;
        cout<<endl<<endl;
    }

    public: int disptest()
    {
        cout<<"Testcode :"<<testcode<<endl;
        cout<<"description :"<<description<<endl;
        cout<<"no.candidate :"<<noCandidate<<endl;
        cout<<"centerReq :"<<centerReq<<endl;
        cout<<"Calcentre :"<<calcntr()<<endl;
    }
};

int  main()
{
    Test t1;

    t1.schedule();
    t1.disptest();
}
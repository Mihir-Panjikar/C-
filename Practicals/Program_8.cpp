/*
Define a class named INSERT consisting of following members:
i) ROLL: of type unsigned short integer under private visibility label
ii) NAME: a character array of size 30 under private visibility label
iii) PERCENT: of type float under private visibility label
iv) getdata(): a public member function which accepts all data members.
v) putdata(): a public member function which displays all data members.
vi) get_roll(): a public member function which returns data member roll.

Write main function which accepts an array of object from the user and performs INSERTION SORT 
on basis of data member ROLL, to obtain the array in ASCENDING order.
*/
#include<iostream>
using namespace std;

class INSERT
{
    unsigned int ROLL;
    char NAME[30];
    float PERCENT;

    public:

    int getdata()
    {
        cout<<"Enter Roll, Name and Percent"<<endl;
        cin>>ROLL;
        cin>>NAME;
        cin>>PERCENT;
        cout<<endl;
    }

    void putdata()
    {
        cout<<"Roll no: "<<ROLL<<endl;
        cout<<"Name: "<<NAME<<endl;
        cout<<"Percent: "<<PERCENT<<endl;
        cout<<endl;
    }

    int get_roll()
    {
        return ROLL;
    }

};

int main()
{
    INSERT S[5];

    cout<<"Enter details for 5 objects:"<<endl;
    for(int i=0;i<5;i++)
    {
        S[i].getdata();
    }

    INSERT A;
    int i,j;

    for(i=1;i<5;i++)
    {
        A=S[i];
        j=i-1;

        while(j>=0 && S[j].get_roll()>A.get_roll())
        {
            S[j+1]=S[j];
            j-=1;
        }
        S[j+1]=A;
    }

    cout<<"Sorted Array of objects:"<<endl;
    for(i=0;i<5;i++)
    {
        S[i].putdata();
    }
}
/*
Define a class named BUBBLE consisting of following members:
i) ROLL: of type unsigned short integer under private visibility label
ii) NAME: a character array of size 30 under private visibility label
iii) PERCENT: of type float under private visibility label
iv) getdata(): a public member function which accepts all data members.
v) putdata(): a public member function which displays all data members.
vi) check(): a public member function which accepts an object of type BUBBLE and returns 1 and 0 
    depending on comparison of data member NAME of the two objects.

Write main function which accepts an array of object from the user and performs BUBBLE SORT on 
basis of data member NAME, to obtain the array in alphabetical order
*/

#include<iostream>
#include<string.h>
using namespace std;

class BUBBLE
{
    unsigned short int ROLL;
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

    int check(BUBBLE B1)
    {
        if (strcmp(NAME,B1.NAME)>0)
        return 1;

        else
        return 0;
    }

};

int main()
{
    BUBBLE B1[5];

    cout<<"Enter the data for 5 objects of array B1:\n"<<endl;
    for(int i=0;i<5;i++)
    {
        B1[i].getdata();
    }
    cout<<endl;

    int i,j;
    BUBBLE temp;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(B1[j].check(B1[j+1]))
            {
                temp=B1[j];
                B1[j]=B1[j+1];
                B1[j+1]=temp;
            }
        }
    }

    cout<<"Sorted on the Basis of names: "<<endl<<endl;
    for(int i=0;i<5;i++)
    {
        B1[i].putdata();
    }

}
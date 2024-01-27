/*
Define a class named BINARY consisting of following members:
i) ROLL: of type unsigned short integer under private visibility label
ii) NAME: a character array of size 30 under private visibility label
iii) PERCENT: of type float under private visibility label
iv) getdata(): a public member function which accepts all data members.
v) putdata(): a public member function which displays all data members.
vi) check(): a public member function which accepts a string to be searched as a parameter and 
compares it with name within the object calling the member function. It returns an integer value.

Write main function which accepts an array of object in ALPHABETICAL ORDER of NAME from the user and 
performs BINARY SEARCH on basis on data member NAME. If found, all the data members of the corresponding 
object are displayed. If not found , display message “NAME not in the list”.
*/
#include<iostream>
#include<string.h>
using namespace std;

class BINARY
{
    unsigned int ROLL;
    char NAME[30];
    float PERCENT;

    public:

    int getdata()
    {
        cout<<"Enter Roll no, Name and Percent:"<<endl;
        cin>>ROLL;
        cin>>NAME;
        cin>>PERCENT;
        cout<<endl;
    }

    void putdata()
    {
        cout<<"ROLL : "<<ROLL<<endl;
        cout<<"NAME : "<<NAME<<endl;
        cout<<"PERCENT : "<<PERCENT<<endl;
        cout<<endl;
    }

    int check(char nam1[])
    {    
      return strcmp(nam1,NAME);
    }

};

int main()
{
    BINARY B1[6];

    cout<<"Enter the data for array B1 and the Names in Alphabetical order:"<<endl;
    for(int i=0;i<5;i++)
    {
        B1[i].getdata();
    }

    char Nam[30];
    
    cout<<"Enter the name to be found"<<endl;
    cin>>Nam;
    cout<<endl;

    int low=0,high=5,mid;
    mid=(low+high)/2;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(B1[mid].check(Nam)>0)
        {
            low=mid+1;
        }

        else if(B1[mid].check(Nam)==0)
        {
            B1[mid].putdata();
            return 0;
        }

        else if(B1[mid].check(Nam)<0)
        {
            high=mid-1;
        }
    }
    
    cout<<"NAME not in the list"<<endl;
}
/*
Define a class named SELECT consisting of following members:
i) ROLL: of type unsigned short integer under private visibility label
ii) NAME: a character array of size 30 under private visibility label
iii) PERCENT: of type float under private visibility label
iv) getdata(): a public member function which accepts all data members.
v) putdata(): a public member function which displays all data members.
vi)get_percent(): a public member function which returns data member percent.

Write main function which accepts an array of object from the user and performs SELECTION SORT on 
basis of data member PERCENT, to obtain the array in DESCENDING order of percentage.
*/

#include<iostream>
#include<string.h>
using namespace std;

class SELECT
{
    unsigned short int ROLL;
    char NAME[30];
    float PERCENT;

    public:

    int getdata()
    {
        cout<<"Enter the Roll no, Name and Percentage"<<endl;
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

    float get_percent()
    {
        return PERCENT;
    }

};

int main()
{
    SELECT obj[5];

    cout<<"Enter the data for 5 objects of array obj:\n"<<endl;
    for(int i=0;i<5;i++)
    {
        obj[i].getdata();
        cout<<endl;
    }
    cout<<endl;

    int i,j,min;
    SELECT A;
    /*
    float temp_percent;
    char temp_name[30];
    int temp_roll;
    */

    for(i=4;i>=0;i--)
    {
        min=i;
        for(j=i-1;j>=0;j--)
        {
            if(obj[j].get_percent()<obj[min].get_percent())
            {
                min=j;
            }
        }

        /* 
        temp_percent=obj[i].PERCENT;
        temp_roll=obj[i].ROLL;
        strcpy(temp_name,obj[i].NAME);

        obj[i].PERCENT=obj[min].PERCENT;
        obj[i].ROLL=obj[min].ROLL;
        strcpy(obj[i].NAME,obj[min].NAME);

        obj[min].PERCENT=temp_percent;
        obj[min].ROLL=temp_roll;
        strcpy(obj[min].NAME,temp_name); 
        */

        A=obj[i];
        obj[i]=obj[min];
        obj[min]=A;
    }

    cout<<"Details in Descending order of Percent:"<<endl;
    for(int i=0;i<5;i++)
    {
        obj[i].putdata();
        cout<<endl;
    }
    cout<<endl;
}
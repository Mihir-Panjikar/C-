/*
Define a class named MERGE consisting of following members:
i) ROLL: of type unsigned short integer under private visibility label
ii) NAME: a character array of size 30 under private visibility label
iii) PERCENT: of type float under private visibility label
iv) getdata(): a public member function which accepts all data members.
v) putdata(): a public member function which displays all data members.
vi) get_roll(): a public member function which returns data member roll.

Write main function which accepts two 1-D array-of-objects A and B which are sorted on basis of ROLL. 
Further perform MERGING (based on ROLL) of these sorted arrays to obtain a new array C. Display array C.
*/
#include<iostream>
#include<string.h>
using namespace std;

class MERGE
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
    
    int get_roll()
    {
        return ROLL;
    }
};

int main()
{
    MERGE A[10],B[10],C[20];
    int M,N,i,j,k;

    cout<<"Enter the size of array of object A and B:"<<endl;
    cin>>M>>N;
    cout<<endl;

    cout<<"Enter the data for array A in Ascending order of roll no:"<<endl;
    for(i=0;i<M;i++)
    {
        A[i].getdata();
    }
    cout<<endl;

    cout<<"Enter the data for array B in Ascending order of roll no:"<<endl;
    for(i=0;i<N;i++)
    {
        B[i].getdata();
    }
    cout<<endl;

    i=0,j=0,k=0;

    while((i<M)&&(j<N))
    {
        if(A[i].get_roll()<B[j].get_roll())
        {
            C[k]=A[i];
            i++;
        }

        else
        {
            C[k]=B[j];
            j++;
        }
        k++;
    }

    while(i<M)
    {
        C[k]=A[i];
        k++;
        i++;
    }

    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }

    cout<<"Details of Array C:"<<endl;
    for(i=0;i<(M+N);i++)
    {
        C[i].putdata();
    }
    cout<<endl;
}
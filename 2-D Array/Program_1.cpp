/*

*/

#include<iostream>
using namespace std;

void transfer(int A[],int B[],int SIZE)
{
    for(int i=0;i<SIZE;i++)
    {
        if(A[i]<0)
            B[i]=-1;
        
        else if(A[i]>0)
            B[i]=1;

        else if(A[i]==0)
            B[i]=0;
    }
}

int main()
{
    int A[10],B[10],size;

    cout<<"Enter the size of of Array A"<<endl;
    cin>>size;

    cout<<endl;
    cout<<"Enter the values for Array A"<<endl;
    for(int i=0;i<size;i++)
        cin>>A[i];
    
    transfer(A,B,size);

    cout<<endl;
    for(int i=0;i<size;i++)
        cout<<B[i]<<"\t";
}
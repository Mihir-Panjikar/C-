/*
Write a function in C++ which accepts an integer array and its size as arguments and
replaces elements having even values with its half and elements having odd values with
twice its value.

Example :
if an array of five elements initially contains the elements as 3, 4, 5, 16, 9 then the function
should rearrange the content of the array as 6, 2, 10, 8, 18

*/
#include<iostream>
using namespace std;

int replace(int A[],int S)
{
    for(int i=0;i<S;i++)
    {
        if(A[i]%2==0)
            A[i]/=2;

        else
            A[i]*=2;
    }
}

int main()
{
    int A[10],size;

    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<endl;

    cout<<"Enter the size of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    cout<<endl;

    replace(A,size);

    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }

}
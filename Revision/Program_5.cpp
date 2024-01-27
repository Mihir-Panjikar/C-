/*
Write a function in C++ which accepts an integer array and its size as arguments and
exchanges the values of first half side elements with the second half side elements of the
array.
Example: If an array of 8 elements initial content as 2,4,1,6,7,9,23,10
The function should rearrange array as 7,9,23,10,2,4,1,6
*/

#include<iostream>
using namespace std;

int Matrix(int arr[10],int size)
{
    int swap=0,i,j;

    for(i=0,j=size/2;i<size/2;i++,j++)
    {
        swap=arr[i];
        arr[i]=arr[j];
        arr[j]=swap;
    }

    cout<<"\nAfter Process: ";
    for(i=0;i<size;i++)
    {
        cout<<arr[i];
    }

    cout<<endl;
}

int main()
{
    int A[10],size,i;

    cout<<"Enter the size of the array: ";
    cin>>size;

    cout<<"\nEnter the elements of the array: "<<endl;
    for(i=0;i<size;i++)
    {
        cin>>A[i];
    }

    Matrix(A,size);

}
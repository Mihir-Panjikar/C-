/*
Suppose A, B, C are arrays of integers of size M,N and M+N respectively. The numbers in
array A appear in ascending order while numbers in array B appear in descending order.
Write a user defined function in C++ to produce a third array C by merging array A by B in
ascending order. Use A, B and C as arguments in the function.
*/

#include<iostream>
using namespace std;

int Matrix(int A[10],int B[10],int C[10],int M,int N)
{
    int i,j,k;
    i = j = k = 0;

    while ( (i<M) && (j<N))
    {
        if (A[i] < B[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }

        else
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }

    while(i<M)
    {
        C[k] = A[i];
        k++;
        i++;
    }

    while(j<N)
    {
        C[k]=B[j];
        k++;
        j++;
    }

    cout<<"\n3rd Array: ";
    
    for(k=0;k<M+N;k++)
        cout<<C[k]<<" ";

    cout<<endl;

}

int main()
{
    int A[10],B[10],C[10],M,N,i;

    cout<<"Enter the size of the 1st array: ";
    cin>>M;

    cout<<"\nEnter the size of the 2st array: ";
    cin>>N;


    cout<<"\nEnter the elements in ascending order for the 1st array: "<<endl;
    for(i=0;i<M;i++)
    {
        cin>>A[i];
    }

    cout<<"\nEnter the elements in descending order for the 2nd array: "<<endl;
    for(i=N-1;i>=0;i--)
    {
        cin>>B[i];
    }

    Matrix(A,B,C,M,N);
}
/*
Write a function in C++ which finds the smallest element in main diagonal and smallest
element in secondary diagonal.
*/

#include<iostream>
using namespace std;

void matrix(int arr[5][5],int size)
{
    int small_1,small_2,swap;

    cout<<endl<<"Smallest in Main Diagonal: ";
    for(int i=0;i<size;i++)
        if(small_1>arr[i][i])
            small_1=arr[i][i];

    cout<<small_1;

    cout<<endl<<"Smallest in Secondary Diagonal: ";
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(i+j==size-1)
                if(small_2>arr[i][j])
                    small_2=arr[i][j]; 

    cout<<small_2;

    cout<<endl<<endl;
}

int main()
{
    int arr[5][5],size;

    cout<<"Enter size of the matrix: ";
    cin>>size;

    cout<<"Enter elements of the matrix: "<<endl;
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            cin>>arr[i][j];

    matrix(arr,size);
}
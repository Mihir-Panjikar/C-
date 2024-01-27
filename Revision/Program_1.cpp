/*
Write a function in C++ which accepts a 2D array of integers and its size as arguments and
displays the elements which lie on diagonals. (Assuming the 2D array to be a square matrix
with odd dimensions, i.e. 3 x 3, 5 x 5, 7 x 7, etc)
Example: if the array content is
5 4 3
6 7 8
1 2 9
Diagonal one: 5 7 9
Diagonal two: 3 7 1
*/

#include<iostream>
using namespace std;

void matrix(int arr[5][5],int size)
{
    cout<<endl<<"Diagonal one: ";
    for(int i=0;i<size;i++)
        cout<<arr[i][i];

    cout<<endl<<"Diagonal two: ";
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
            if(i+j==size-1)
                cout<<arr[i][j];

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
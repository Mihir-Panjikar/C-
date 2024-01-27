/*
Write a user defined function in C++ to find and display the sum of diagonal elements from a
2D array MATRIX[6][6] containing integers.
*/

#include<iostream>
using namespace std;

int matrix(int MATRIX[6][6])
{
    int sum=0;

    for(int i=0;i<6;i++)
        sum+=MATRIX[i][i];

    return sum;
}

int main()
{
    int arr[6][6];

    cout<<"Enter elements for a 6 by 6 matrix: "<<endl;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>arr[i][j];

    cout<<endl<<"Sum of Diagonal elements: "<<matrix(arr);
}
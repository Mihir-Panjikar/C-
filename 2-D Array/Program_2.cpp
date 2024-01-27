/*
Write a function display() in C++ to transfer the content from two arrays first[] and second* +
to array final* +.The even places (0,2,4.......) of array final*+should get the content from
the array first*+ and odd places (1,3,5....) of array final should get the contents of array
second[].
Assume that both the first[] and second[] array contain the same number of elements and
function display accepts all arguments.
Ex if first[] array contains 30,60,90 and the second[] array contains 10,50,80 then the
final[] array should contain
30,10,60,50,90,80

*/

#include<iostream>
using namespace std;

void display(int A[],int B[],int C[])
{
    for(int i=0,j=0,k=0;i<10;i++)
    {
        if(i%2==0)
        {
            C[i]=A[j];
            j++;
        }

        else
        {
            C[i]=B[k];
            k++;
        }
    }

    for(int i=0;i<10;i++)
        cout<<C[i]<<" ";
}

int main()
{
    int Array1[5],Array2[5],Array3[10];
    cout<<"Enter the 5 values for Array 1"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>Array1[i];
    }
    cout<<endl;

    cout<<"Enter the 5 values for Array 2"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>Array2[i];
    }
    cout<<endl;

    display(Array1,Array2,Array3);

}
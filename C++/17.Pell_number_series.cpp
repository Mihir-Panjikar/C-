/*
Write a procedural C++ program which accepts a positive integer 'n' from the user to generate 'n' pell number
NOTE: A Pell number series starts with 0 and 1, and the next pell number is calculated by multiplying
    the recent pell number by 2 and adding it to the previous pell number.
*/

#include<iostream>
using namespace std;

int main()
{
    int i,n,num1,num2,pell,temp;

    cout<<"Enter a number"<<endl;
    cin>>n;

    num1=0;
    num2=1;

    cout<<endl<<num1<<" "<<num2<<" ";

    for(i=1;i<=n;i++)
    {
        pell=(num2*2)+num1;
        cout<<pell<<" ";

        temp=num2;
        num2=pell;
        num1=temp;
    }
}
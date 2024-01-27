/*
Write a complete c++ program to determine the sum of the following series

x + x^2/2! + x^3/3! + x^4/4! + ..... up to N terms
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double Total_sum;
    double sum1;
    int facto;
    int x,n;
    int i,j;
    
    cout<<"Enter the value of x and n"<<endl;
    cin>>x>>n;

    Total_sum=x;

    for(i=1;i<n;i++)
    {
        sum1=pow(x,i+1);

        facto=1;
        for(j=1;j<=i+1;j++)
        {
            facto*=j;
        }

        Total_sum+=sum1/facto;
    }

    cout<<endl<<"Value of series : "<<Total_sum;

}
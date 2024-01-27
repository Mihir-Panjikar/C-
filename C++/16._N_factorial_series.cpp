/*
Write a complete procedural C++ program to accept a positive integer n 
and calculate the sum of the following series
(1/1!)+(1+2/2!)+(1+2+3/3!)+....(1+2+3..../n!)

*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int facto=1,i;

    for(i=1;i<=n;i++)
    {
       facto*=i;
    }
    
    return facto;
}

int main()
{
    int i,j,n;
    float sum1,sum2,sum_final=0;

    cout<<"Enter a positive integer."<<endl;
    cin>>n;
    
   
    for(i=1;i<=n;i++)
    {
        sum1=0;
        for(j=1;j<=i;j++)
        {
            sum1+=j;
        }

        sum2=sum1/fact(i);
        sum_final+=sum2;

    }
    
    cout<<endl<<"The sum is "<<sum_final;
}

/* for(i=1;i<=n;i++)
{
    num=num+i;
    fact=fact*i;
    sum=sum+(num/fact);
}
cout<<sum; */
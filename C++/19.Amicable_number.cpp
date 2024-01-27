//Program to check if two given numbers are amicable numbers.

#include<iostream>
using namespace std;

int main()
{
    int i,num1,num2,sum1=0,sum2=0;

    cout<<"Enter two number."<<endl;
    cin>>num1>>num2;

    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
        sum1+=i;
    }

    for(i=1;i<num2;i++)
    {
        if(num2%i==0)
        sum2+=i;
    }

    if((sum1==num2) && (sum2==num1))
    cout<<endl<<num1<<" and "<<num2<<" are Amicable numbers."<<endl;
    
    else
    cout<<endl<<num1<<" and "<<num2<<" are not Amicable numbers."<<endl;
}
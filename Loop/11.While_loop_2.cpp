#include<iostream>
using namespace std;

int main()
{
    int sum=0,i,rem,num;
    
    cout<<"Enter a number.\n";
    cin>>num;

    i=num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
    }

    cout<<"The sum of digits is "<<sum;
}
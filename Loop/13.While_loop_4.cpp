#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter two number.\n";
    cin>>num1>>num2;

    while(num1!=num2)
    {
        if(num1>num2)
        {
            num1-=num2;
        }
        else if(num2>num1)
        {
            num2-=num1;
        }
    }

    cout<<"The HCF is "<<num1;

    /*
    int a,b,HCF;

    a=num1;
    b=num2;

    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }

    HCF=a;

    */

}
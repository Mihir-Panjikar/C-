#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num,n1,n2;

    cout<<"Enter two number.\n";
    cin>>num1>>num2;

    n1=num1;
    n2=num2;

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

    num=(n1*n2)/num1;
    cout<<"\nThe LCM is "<<num;
}
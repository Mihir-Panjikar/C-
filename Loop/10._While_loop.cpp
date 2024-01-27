#include<iostream>
using namespace std;

int main()
{
    int a=0,num;
    
    cout<<"Enter a number.\n";
    cin>>num;
    
    while (num>0)
    {
        num=num/10;
        a++;
    }

    cout<<"The number of digits is "<<a;
}
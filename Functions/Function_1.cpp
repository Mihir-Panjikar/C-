/*
write a user-defined function named "convert" which accepts a positive decimal integer number
as parameter and determines whether the number is prime or composite the function returns 1 if prime
else returns 0
*/

#include<iostream>
using namespace std;

int convert(int num)
{
    int i,flag=1;

    for(i=2;i<num;i++)
    {
        if(num%i!=0)
        flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int num;
    cout<<"Enter a positive decimal integer number"<<endl;
    cin>>num;
    cout<<endl;
    cout<<convert(num);
}
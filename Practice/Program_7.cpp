/*
Write a user defined function named “check1()” which accepts a string from the
user and determines the total number of alphabets and digits in it for display.
*/

#include<iostream>
using namespace std;

int check1(char str[],int num1,int num2)
{
    int i=0;

    while(str[i]!='\0')
    {
        if((str[i]>='a' || str[i]>='A') && (str[i]<='z') || (str[i]<='Z'))
            num1++;
        
        else if((str[i]>=0) && (str[i]<=9))
            num2++;
        
        i++;
    }
}

int main()
{
    int num1=0,num2=0;
    cout<<"The number of alphabets and digits in the string is ";
    check1("Shark8",num1,num2);
    cout<<num1<<" and "<<num2;
}
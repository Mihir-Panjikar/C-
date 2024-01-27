//Write a C++ program to find the second largest number without using arrays(input : 4 numbers)

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3,num4,max1,max2,i=4;

    cout<<"Enter 4 numbers."<<endl;
    cin>>num1>>num2>>num3>>num4;

    if(num1<num2)
    {
        max1=num2;
        max2=num1;
    }
    else
    {
        max1=num1;
        max2=num2;
    }
    if(max1<num3)
    {
        max2=max1;
        max1=num3;
    }
    else if(max2<num3)
    {
        max2=num3;
    }
    if(max2<num4)
    {
        max2=num4;
    }

    cout<<endl<<"The second largest value is "<<max2;

}
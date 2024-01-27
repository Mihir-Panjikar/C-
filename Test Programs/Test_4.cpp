//Write a complete procedural C++ program to compute and 
//display the sum of prime digits present in a number 'n'

#include<iostream>
using namespace std;

int main()
{
    int i,j,sum=0,n,k,flag;

    cout<<"Enter a number"<<endl;
    cin>>n;

    do
    {
        flag=0;
        k=n%10;
        for(i=2;i<k;i++)
        {
            if(k%i==0)
            flag=1;
        }
        if(flag==0)
        {
            if(k!=1)
            sum+=k;
        }

        n/=10;
    }
    while(n>0);

    cout<<endl<<"The sum of prime no. is "<<sum;
}


/* while(n>0)
{
    rem=n%10;
    if(rem==2||rem==3||rem==5||rem==7)
    sum+=rem;
    n/=10;
} */
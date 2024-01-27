//The program should count and display the number of prime digits present in the number N.

#include<iostream>
using namespace std;

int main()
{
    int n,i,num=0,count=0,rem;

    cout<<"Enter a positive integer"<<endl;
    cin>>n;

    cout<<endl;
    do
    {
        //num=n;
        rem=n%10;
        for(i=2;i<rem;i++)
        {
            if(rem%i==0)
            break;
        }

        if(rem==i)
        {
            cout<<rem<<" ";
            count++;
        }
        n/=10;
    }
    while(n!=0);
    cout<<endl<<"The number of prime numbers is "<<count<<endl;

}
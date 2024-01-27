/* 
write a procedral C++ program to generate n perfect numbers
where n is the input entered through a keyboard.
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum,count=0;

    cout<<"Enter a number"<<endl;
    cin>>n;
       
    for(i=1;i<=32767;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum+=j;
        }
        if(sum==i)
        {
            cout<<sum<<" ";
            count++;
        }
        if(count==n)
        break;
    }
}
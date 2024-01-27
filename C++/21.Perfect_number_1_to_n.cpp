/* 
write a procedral C++ program to generate perfect numbers from 1 to n
where n is the input entered through a keyboard.

Perfect number(special number): eg. 6 (1,2,3) factor of 6 added, 1+2+3=6.
*/

#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum;

    cout<<"Enter a number"<<endl;
    cin>>n;
       
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum+=j;
        }
        if(sum==i)
        cout<<sum<<" ";
    }
}
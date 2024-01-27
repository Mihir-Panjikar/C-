#include<iostream>
using namespace std;

int main()
{
    int num,i=1,sum=0;

    cout<<"Enter how many natural numbers to be printed.\n";
    cin>>num;

    cout<<endl;
    
    while(i<=num)
    {
        cout<<i<<"\t";
        sum=sum+i;
        i++;
    }

    cout<<"\n\nThe sum of "<<num<<" numbers is "<<sum;
}
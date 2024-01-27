#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Enter the no. of rows: ";
    cin>>n;

    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cout<<i+j<<"\t";
        }
        cout<<endl;
    }
}
/*
11111
01111
00111
00011
00001
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i>j)
            cout<<0;

            else
            cout<<1;
        }
        cout<<endl;
    }

    /*
    
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<"0";
        }

        for(int k=5;k>=i;k--)
        {
            cout<<"1";
        }
    }

    */
}
/* 
*    *
*    *
*    *
*    *
*    *
******
*/

#include<iostream>
using namespace std;

int main()
{
    int n=6,i,j;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || j==6 || i==6)
            cout<<"*";

            else
            cout<<" ";
        }
        cout<<endl;
    }
}
/*
    *
   ***
  *****
 *******
*********

*/

#include<iostream>
using namespace std;

int main()
{
    int row=5,space,i,j;

    for(i=1;i<=row;i++)
    {
        for(space=4;space>=i;space--)
        {
            cout<<" ";
        }
        
        for(j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
/*
10 8 6 4 2
8 6 4 2
6 4 2
4 2
2
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=10;i>1;i=i-2)
    {
        for(j=i;j>=1;j=j-2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
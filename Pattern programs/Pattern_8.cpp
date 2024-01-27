/*
1
2 4
3 6 9
4 8 12 16
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j*i<<" ";
        }
        cout<<endl;
    }
}
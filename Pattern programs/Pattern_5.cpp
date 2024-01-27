/*
1
333
55555
7777777
999999999
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=10;i=i+2)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
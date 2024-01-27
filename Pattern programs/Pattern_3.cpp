/*
1
11
112
1122
11223
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            cout<<k;
            if(j%2==0)
            k++;
            
        }
        cout<<endl;
    }
}
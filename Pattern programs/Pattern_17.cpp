/* 
10 9 8 7
6 5 4
3 2
1
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j=10,k;

    for(i=4;i>=1;i--)
    {
        for(k=1;k<=i;j--,k++)
        {
            cout<<j<<"\t";
        }
        cout<<endl;
    }
}
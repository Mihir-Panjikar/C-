/* 
1
1 3
1 3 5
1 3 5 7
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=2*i;j=j+2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
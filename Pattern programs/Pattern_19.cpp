/* 
1
1 3
1 3 6
1 3 6 9
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        j=1;
        cout<<j<<" ";
        for(j=3;j<=2*i+1;j=j+3)
        {
            if(i!=1)
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
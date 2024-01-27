/*
1
2 4
1 3 5
2 4 6 8
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for(i=1;i<5;i++)
    {
        for(j=1;j<=2*i;j=j+2)
        {
            if(i%2==0 && j%2!=0)
            {
                j++;
            }

            cout<<j;
        }
        cout<<endl;
    }
}
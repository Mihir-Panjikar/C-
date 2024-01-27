/* 
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA
*/
#include<iostream>
using namespace std;

int main()
{
    char letter[]="ABCDE";
    int i,j,k;

    for(i=2;i<=10;i=i+2)
    {
        for(j=0;j<=(i/2)-1;j++)
        {
            cout<<letter[j];
        }

        for(k=j-2;k>=0;k--)
        {
            cout<<letter[k];
        }
        cout<<endl;
    }

}
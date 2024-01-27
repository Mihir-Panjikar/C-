/*
ACEG
ACE
AC
A
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;
    char string[5]="ACEG";

    for(i=4;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<string[j];
        }
        cout<<endl;
    }

    /*
    char ch;
    int i,j;
    for(i=4;i<=4;i++)
    {
        for(j=4,ch='A';j>=i;j--)
        {
            cout<<ch<<" ";
            ch+=2;
        }
        cout<<endl;
    }
    */

}
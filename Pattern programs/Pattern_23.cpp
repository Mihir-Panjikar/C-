/*
Write a user defined function pattern() which accepts a positive integer 'n' as parameter generates the
following pattern foe n lines

eg if n=4

4
3   3
2   2   2
1   1   1   1
*/

#include<iostream>
using namespace std;

int pattern(int n)
{
    int i,j;

    for(i=n;i>0;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int n;

    cout<<"Enter the value of n"<<endl;
    cin>>n;

    pattern(n);
}
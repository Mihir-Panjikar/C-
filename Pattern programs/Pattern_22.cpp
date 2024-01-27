/*
Write a user defined function called pattern that accepts the number of rows as an argument to the following
pattern

1
2 2
3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;

    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<endl;

    pattern(n);
}

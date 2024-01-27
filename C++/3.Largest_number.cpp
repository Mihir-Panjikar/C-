#include<iostream>
using namespace std;

int main()
{
    int a,b,c,high;

    cout<<"Enter the 3 numbers\n";
    cin>>a>>b>>c;

    high=(a>b && a>c)?a:(b>c)?b:c;

    cout<<"\nLargest value is "<<high;

}
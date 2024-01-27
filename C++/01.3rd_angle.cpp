#include<iostream>
using namespace std;

int main()
{
    int a,b,angle;

    cout<<"Enter the first and the second angle\n";
    cin >>a>>b;

    angle=180-a-b;

    cout<<"\nThe third Angle is "<<angle;
}
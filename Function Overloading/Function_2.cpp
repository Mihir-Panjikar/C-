/* 
write prototypes for a set of overloaded functions called area() that compute & return the areas of
i)square as s square
ii)Triangle as 1/2*b*h
 */

#include<iostream>
#include<cmath>
using namespace std;

float area(float side)
{
    return sqrt(side);
}

float area(float bas,float hei)
{
    return (bas*hei)/2;
}

int main()
{
    float square,base,hei;

    cout<<"Enter the square of the sides and base and height of the triangle"<<endl;
    cin>>square>>base>>hei;

    cout<<endl;
    cout<<area(square)<<endl<<area(base,hei);
}
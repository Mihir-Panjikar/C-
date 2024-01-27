//A C++ program to accept a coordinate point in a XY coordinate system and determine in which quadrant the point lies 

#include<iostream>
using namespace std;

int main()
{
    float x,y;

    cout<<"Enter the value of x and y coordinate.\n";
    cin>>x>>y;

    if(x>0 && y>0)
    {
        cout<<"The coordinate lies in 1st quadrant.";
    }

    else if(x<0 && y>0)
    {
        cout<<"The coordinate lies in 2nd quadrant.";
    }

    else if(x<0 && y<0)
    {
        cout<<"The coordinate lies in 3rd quadrant.";
    }

    else if(x>0 && y<0)
    {
        cout<<"The coordinate lies in 4th quadrant.";
    }

    else
    {
        cout<<"The coordinate lies on the origin";
    }

}
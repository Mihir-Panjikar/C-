/*
Write function deinations for an overloaded function that returns the volume of the following structures(3)
1)sphere(formula V=4/3 pi r cube)
2)cone(formula V=1/3 pi r square h)
3)cuboid(formula V=l*b*h)
assume that all arguments are of type float
*/

#include<iostream>
using namespace std;

float volume(float rad)
{
    float volume=(4*3.14*rad*rad*rad)/3;
    return volume;
}

float volume(float rad,float hei)
{
    float volume=(3.14*rad*rad*hei)/3;
    return volume;
}

float volume(float len,float bre,float hei)
{
    float volume=len*bre*hei;
    return volume;
}

int main()
{
    int sel;
    float len,bre,hei,rad;

    cout<<"Enter 1 for sphere"<<endl<<"Enter 2 for cone"<<endl<<"Enter 3 for cuboid"<<endl;
    cin>>sel;
    cout<<endl;

    switch(sel)
    {
        case 1:
        cout<<"Enter the radius of the sphere"<<endl;
        cin>>rad;
        cout<<"The volume of sphere is "<<volume(rad)<<endl;
        break;

        case 2:
        cout<<"Enter the radius and height of the cone"<<endl;
        cin>>rad>>hei;
        cout<<"The volume of cone is "<<volume(rad,hei)<<endl;
        break;

        case 3:
        cout<<"Enter the length,breath and height of the cuboid"<<endl;
        cin>>len>>bre>>hei;
        cout<<"The volume of cuboid is "<<volume(len,bre,hei)<<endl;
    }
}
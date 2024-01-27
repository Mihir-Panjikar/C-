/*
Create a class to print the area of a square and a rectangle. The class has two functions with
the same name but different number of parameters. The function for printing the area of
rectangle has two parameters which are its length and breadth respectively while the other
function for printing the area of square has one parameter which is the side of the square.
*/

#include<iostream>
using namespace std;

class area
{
    public:

    int area;

    int squ(int len)
    {
        area=len*len;
        return area;
    }

    int rec(int len,int bre)
    {
        area=len*bre;
        return area;
    }
};

int main()
{
    area a1;

    int x,len,bre;
    cout<<"Enter 1 for area of square and 2 for area of rectangle"<<endl;
    cin>>x;

    switch(x)
    {
        case 1:
        cout<<"Enter the length of the square"<<endl;
        cin>>len;
        cout<<"Area of square is "<<a1.squ(len);
        break;

        case 2:
        cout<<"Enter the length and breadth of rectangle"<<endl;
        cin>>len>>bre;
        cout<<"Area of rectangle is "<<a1.rec(len,bre);
        break;
    }

}
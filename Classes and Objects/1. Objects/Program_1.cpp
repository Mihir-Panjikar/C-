/* 
write a C++ program that has a class called Room that contains length,bredth and height as the data members.
Define two member functions calculateArea() and calculateVolume().Create an object called room1 and assign
values to the data members.Calculate and display the area and volume of the room.
*/

#include<iostream>
using namespace std;

class Room 
{
    public:

    float length,bredth,height;

    float calculate_area()
    {
        return length*bredth;
    }

    float calculate_volume()
    {
        return length*bredth*height;
    }  
};

int main()
{
    Room room1;

    room1.length=10;
    room1.bredth=20;
    room1.height=15;

    cout<<"Area of the room ="<< room1.calculate_area()<<endl;
    cout<<"Volume of the room ="<< room1.calculate_volume()<<endl;

}
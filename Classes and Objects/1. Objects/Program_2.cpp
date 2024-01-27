/* 
Define a Class Car Rental in C++ with the following specifications.
private:
Car_id of type long int
Aboutcar of type char array size 20
Cartype of type char array size 20
Rent of type float
A member function defined under private visibility label called assignment() to assign the following values
per the given car type

cartype     rent
small       1000
van         800
SUV         2500

public members:
1)A function getcar() to allow the user to enter the values for car_id ,aboutcar,cartype and call function
  assignment() to assign rent.
2)A function showcar() to allow user to view the contents of all the data members.
*/

#include<iostream>
#include<string.h>
using namespace std;

class CARRENTAL
{
    private:

    long int Car_id;
    char Aboutcar[20];
    char Cartype[20];
    float Rent=0;

    float assignment()
    {
        if (strcmp(Cartype,"small")==0)
        {
            Rent=1000;
        }

        else if (strcmp(Cartype,"van")==0)
        {
            Rent=800;
        }
        else if (strcmp(Cartype,"suv")==0)
        {
            Rent=2500;
        }

        return Rent;
    }

    public: float getcar()
    {
        cout<<"Enter the values for Car_id,about car and car type"<<endl;
        cin>>Car_id;
        cin>>Aboutcar;
        cin>>Cartype;

        Rent=assignment();
    }

    public: float showcar()
    {
        cout<<endl<<endl;
        cout<<"Car_id : "<<Car_id<<endl;
        cout<<"About car : "<<Aboutcar<<endl;
        cout<<"Car type : "<<Cartype<<endl;
        cout<<"Rent : "<<Rent<<endl;
    }

};

int main()
{
    CARRENTAL car1;
    
    car1.getcar();
    car1.showcar();

}

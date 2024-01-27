/*
Define a class Play in C++ with the following specifications:

Private data members:

Playcode: of type integer
Playtitle: array of 20 characters
Duration: of type float
Noofscenes: of type integer

Public member functions:

A constructor to initialize Duration as 45 and Noofscenes as 5

newplay(): function to accept values for Playcode & Playtitle
moreinfo(): function to assign the data values of Duration and Noofscenes with the help
            of corresponding values passed as parameters to this function.

showplay(): function to display all the data members on the screen.

Write only the function definitions.
*/

#include<iostream>
using namespace std;

class Play
{
    int Playcode;
    char Playtitle[20];
    float Duration;
    int Noofscenes;

    public:

    Play()
    {
        Duration=45;
        Noofscenes=5;
    }

    int newplay()
    {
        cout<<"Enter the Playcode and Playtitle"<<endl;
        cin>>Playcode;
        cin>>(Playtitle);
    }

    int moreinfo(Play P1)
    {
        Duration=P1.Duration;
        Noofscenes=P1.Noofscenes;
    }
    
    int showplay()
    {
        cout<<endl<<endl;
        cout<<"Playcode: "<<Playcode<<endl;
        cout<<"Playtitle: "<<Playtitle<<endl;
        cout<<"Duration: "<<Duration<<endl;
        cout<<"Noofscenes: "<<Noofscenes<<endl;
    }
};

int main()
{
    Play P1;

    P1.newplay();
    P1.moreinfo(P1);
    P1.showplay();
}
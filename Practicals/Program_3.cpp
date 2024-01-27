/*

C++ program on multiple inheritance

Declare an abstract class named train consisting of the following members: 
Trno:of type integer under private visibility label

Declare another abstract class named destination consisting of the following members 
Place:a character array of size 30 under private visibility label

Derive a class named ticket from class train and destination both in public mode.The class has the following member:
Fare:of type integer under private visibility label.

Define a single member function in each class mentioned above in such a way that for input:
1002 train number trno 

Mumbai place
500 fare
The output should be “cost per ticket for train number 1002 going to
mumbai is 500” Write a relevant function for the above.

*/
#include<iostream>
#include<string.h>
using namespace std;

class train
{
    int Trno;

    public:
    train(int x)
    {
        Trno=x;
        cout<<"cost per ticket for train number "<<Trno<<" going to ";
    }
};

class destination
{
    char Place[30];

    public:
    destination(char Plac[30])
    {
        strcpy(Place,Plac);
        cout<<Place<<" is ";
    }
};

class ticket: public train,public destination
{
    int fare;

    public:
    ticket(int x,char Plac[30],int y): train(x),destination(Plac)
    {
        fare=y;
        cout<<fare;
    }
};

int main()
{
    ticket c(1002,"Mumbai",500);
}
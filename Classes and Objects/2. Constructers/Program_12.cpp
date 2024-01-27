/*
Define a class "Library" in C++ with the following specifications :

Data members :

Private : 

• code — type integer
• name — character array of size 20
• game_name — character array of size 20
• mtype — type character (P for permanent member and T for temporary member)
• fees — type float

Member functions :

Public : 
• A parameterised constructor to assign the values for data members code, name, game_name and mtype.
• Calculate()-to calculate fees according to the following criteria. Fees for different games.

Game-name              Fees for Permanent Member
Cricket                1000
Tennis                 2000
Badminton              3000

If the member is temporary then the fees is double of permanent member.

• Display()-to display all the data members on the screen.

Write a function main() to call necessary functions.
*/

#include<iostream>
#include<string.h>
using namespace std;

class Library
{
    int code;
    char name[20];
    char game_name[20];
    char mtype;
    float fees;

    public:

    Library(int cod, char nam[20],char game_nam[20],char mtyp)
    {
        code=cod;
        strcpy(name,nam);
        strcpy(game_name,game_nam);
        mtype=mtyp;
    }

    float Calculate(char game_name[20],char mtype)
    {
        if(strcmp(game_name,"Cricket")==0)
        {
            fees=1000;
        }

        else if(strcmp(game_name,"Tennis")==0)
        {
            fees=2000;
        }

        else if(strcmp(game_name,"Badminton")==0)
        {
            fees=3000;
        }

        if(mtype=='T')
        {
            fees*=2;
        }

        return fees;
    }

    int Display()
    {
        cout<<endl<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Game name: "<<game_name<<endl;
        cout<<"Member type: "<<mtype<<endl;
        cout<<"Fees: "<<Calculate(game_name,mtype)<<endl;
    }

};

int main()
{
    int code;
    char name[50];
    char game_name[20];
    char mtype;

    cout<<"Enter code,Name,Game name and type of member"<<endl;
    cin>>code;
    cin>>name;
    cin>>game_name;
    cin>>mtype;

    Library M1(code,name,game_name,mtype);

    M1.Display();
}
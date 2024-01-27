/*
Define a class Supply with complete function definitions in C++ with the following description:(March 2017)

Private:

Code: of type int
FoodName: An array of 20 characters
Sticker: An array of 10 characters
FoodType: An array of 20 characters

A member function GetType() to assign the folllowing values for FoodType as per the given Sticker.

Sticker        Food Type

GREEN          Vegetarian
YELLOW         Contains Egg
RED            Non-vegetarian

Public:

A function FoodIn() to allow the user to enter values for Code, foodName, Sticker and call function
GetType() to assign respective FoodType.

A function FoodOut() to allow the user to view the content of all the data members.

Write a function main() to call necessary functions.


*/
#include<iostream>
#include<string.h>
using namespace std;

class supply
{
    private:
    int code;
    char foodname[20];
    char sticker[20];
    char food_type[20];

    string get_type()
    {
        if(strcmp(sticker,"green")==0)
        {
            strcpy(food_type,"vegetarian");
        }

        else if(strcmp(sticker,"yellow")==0)
        {
            strcpy(food_type,"contains egg");
        }
        
        else if(strcmp(sticker,"red")==0)
        {
            strcpy(food_type,"Non-Veg");
        }

        return food_type;
    }

    public: int foodin()
    {
        cout<<"Enter code,foodname,sticker"<<endl;
        cin>>code>>foodname>>sticker;
    }

    public: int foodout()
    {
        cout<<endl<<endl;
        cout<<"code: "<<code<<endl;
        cout<<"Foodname: "<<foodname<<endl;
        cout<<"sticker: "<<sticker<<endl;
        cout<<"Food type: "<<get_type()<<endl;
    }
};

int main()
{
    supply s1;

    s1.foodin();
    s1.foodout();
}
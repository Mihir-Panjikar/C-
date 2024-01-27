/*
Declare an abstract class named POPULATION consisting of the following members: (2010)
Private member:
i) count: a long unsigned integer to hold the population count

public member:
i)output1(): a member function to return the population count.

Declare another abstract class named “WARD” consisting of the followingmembers:
Private member:
i) Wno: an integer to hold the ward member.

Public member:
i)output2() : a member function to return the ward number.

Derive a class called “TALUKA” from the above mentioned classes both in private mode.

The class TALUKA has one private data member ‘name’ of type string consisting of maximum 20
characters and one public member function called output3() to display all the data members.

Define constructors in all the above three classes. Write main() function to pass the following values
as arguments to the constructrs of the approprite classes.

20,000 //population count
23 //ward number
Pernem //Taluka name

Then call the appropriate output function to display the output in the following format:
The population of ward number 23 belonging to Pernem taluka is approximately equal to 20000
*/
#include<iostream>
#include<string.h>
using namespace std;

class POPULATION
{
    long unsigned int count;

    public:

    long unsigned int output1()
    {
        return count;
    }

    POPULATION(int x)
    {
        count=x;
    }

};

class WARD
{
    int Wno;

    public:

    int output2()
    {
        return Wno;
    }

    WARD(int y)
    {
        Wno=y;
    }

};

class TALUKA: POPULATION,WARD
{
    char name[30];
    
    public:

    string output3()
    {
        cout<<"The Population of ward number "<<output2()<<" Belonging to "<<name<<" taluka is approximately equal to "<<output1();
    }

    TALUKA(long unsigned int x,int y,char *z): POPULATION(x),WARD(y)
    {
        strcpy(name,z);
    }
};

int main()
{
    TALUKA T1(20000,23,"Pernem");

    T1.output3();
}
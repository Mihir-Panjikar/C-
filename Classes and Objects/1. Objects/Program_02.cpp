/*
Define a class competition with the complete function definitions in C++ with the following
specifications. 

Private:

Event_no of type integer
Description of type string size[30]
Score of type integer
Qualified of type character

Public:

A constructor functions to assign initial values Event_no as 101 , description as “state level”, Score as
50 and Qualified as ‘N’

Input() To take input for Event_no , Description and Score

Award() To award qualified as ‘y’ if Score is more than the cuttoff_ score passed as argument 
to the function else ‘N’

Show() To display all the details.

Write a function main() accepting the input for cuttoff_score and call the necessary functions.

*/
#include<iostream>
#include<string.h>
using namespace std;

class competition
{
    int event_no;
    char description[30];
    int score;
    char Qualified;

    public:

    competition()
    {
        event_no=101;
        strcpy(description,"State level");
        score=50;
        Qualified='N';
    }

    void input()
    {
        cout<<"Enter the event no, description and score"<<endl;
        cin>>event_no>>description>>score;
    }

    void award(int cutoff)
    {
        if(score>cutoff)
        {
            Qualified='Y';
        }
    }

    void show()
    {
        cout<<endl;
        cout<<"Event no: "<<event_no<<endl;
        cout<<"Description: "<<description<<endl;
        cout<<"Score: "<<score<<endl;
        cout<<"Qualified: "<<Qualified<<endl;
    }

};

int main()
{
    competition t1;

    int cutoff;

    t1.input();
    cout<<endl<<"Enter the cutoff score"<<endl;
    cin>>cutoff;

    t1.award(cutoff);
    t1.show();
}
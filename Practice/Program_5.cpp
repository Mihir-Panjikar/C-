// Guessing Game

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main()
{
    int num,in;

    srand(time(0));
    num=rand()%10;

    cout<<"Guess the correct number from 0 to 9"<<endl;

    while(in!=num)
    {
        cin>>in;
        if(in!=num)
        {
            cout<<"Oops! you have guessed wrong"<<endl;
            cout<<"You can try again"<<endl;
            cout<<endl;
        }
    }

    cout<<"You have guessed Correct. The answer is "<<num;
}
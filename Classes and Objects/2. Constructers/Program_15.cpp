/*
Define a class named "EGG" with the following specification.

Private :
• doz of type integer.
• no of type integer.

• Define a default constructor which accepts values for all the data members.
• Define a copy constructor which accepts two objects as parameters and initialises data members as 
  per the summation of dozens of both the objects (Refer example below)
• Define member function show ( ) in public visibility label to display values of
data members of all the objects. Further write appropriate main ( ) function.

Example :
if obj 1 is 3 doz 8 numbers
   obj 2 is 4 doz 6 numbers
   obj 3 is 8 doz 2 numbers
*/

#include<iostream>
using namespace std;

class EGG
{
  int doz,no;

  public:

  EGG()
  {
    cout<<"Enter dozens and number"<<endl;
    cin>>doz>>no;
    cout<<endl;
  }

  EGG(EGG E1,EGG E2)
  {
    doz=E1.doz+E2.doz;
    no=E1.no+E2.no;
    doz+=no/12;
    no%=12;
  }

  int show()
  {
    cout<<endl;
    cout<<"Dozens: "<<doz<<endl;
    cout<<"No.: "<<no<<endl;
  }

};

int main()
{
  EGG E1,E2;
  EGG E3(E1,E2);

  E1.show();
  E2.show();
  cout<<endl<<"Sum of both:";
  E3.show();
}
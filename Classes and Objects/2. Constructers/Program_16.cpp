/*
Define a class named convert with the following specifications.

● Feet of type integer
● Inch of type integer
● Define a default constructor which accepts values for all the data members.
● Define a copy constructor which accepts two objects as parameters and initialises
  data members as per the summation of quantities of both the objects.(Refer example below)
● Define member function view() to display values of data members of all the objects.

Further write appropriate main function

Example: 
if Obj1 is 3ft 4 inches
   Obj2 is 5ft 9 inches
   Obj3 is 9ft 1 inches
*/

#include<iostream>
using namespace std;

class convert
{
   int feet;
   int Inch;

   public:

   convert()
   {
      cout<<"Enter the values for feet and inch"<<endl;
      cin>>feet>>Inch;
      cout<<endl;
   }

   convert(convert C1,convert C2)
   {
      feet=C1.feet+C2.feet;
      Inch=C1.Inch+C2.Inch;
      feet+=Inch/12;
      Inch%=12;
   }

   int view()
   {
      cout<<endl;
      cout<<"Feet: "<<feet<<endl;
      cout<<"Inch: "<<Inch<<endl;
   }
};

int main()
{
   convert C1,C2;
   convert C3(C1,C2);

   C1.view();
   C2.view();
   cout<<endl<<"Sum of both:";
   C3.view();
}
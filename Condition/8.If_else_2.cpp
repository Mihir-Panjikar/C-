//A C++ program for eligibility of admission for a professional course

#include<iostream>
using namespace std;

int main()
{
    float math,phy,chem,sum1,sum2;

    cout<<"Enter marks of maths,physics and chem\n.";
    cin>>math>>phy>>chem;
    
    sum1=math+phy;
    sum2=math+phy+chem;

   if(math>=65 && phy>=55 && chem>=50)
   {
       if((sum2>=190) || (sum1>=140))
       {
        cout<<"Eligible for the course";
       }
   }
    else
    {
        cout<<"Not eligible for the course";
    }
}
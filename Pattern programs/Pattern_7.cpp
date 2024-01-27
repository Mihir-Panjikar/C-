/*
@@@@@
   @
  @
 @
@@@@@
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int i,j,k,p;

   for(i=1;i<=5;i++)
   {
      cout<<"@";
   }
   cout<<endl;

   for(i=1,j=4;i<=3;i++,j--)
   { 
      cout<<setw(j)<<"@"<<endl;
   }

   for(i=1;i<=5;i++)
   {
      cout<<"@";
   }
   cout<<endl;
}

/*

for(i=0;i<n;i++)
{
   for(j=0;j<n;j++)
   {
      if(i==0 || i==n-1 || j==n-1-i)
      {
         cout<<"@";
      }
   }
}

*/
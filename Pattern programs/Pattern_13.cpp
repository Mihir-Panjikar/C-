/*  
   1
  121 
 12321
1234321

*/

#include<iostream>
using namespace std;

int main()
{
    int space,j;

    for(int i=1,k=0;i<=4;i++,k=0)
    {
        for(space=1;space<=4-i;space++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        
        for(j=i-1;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
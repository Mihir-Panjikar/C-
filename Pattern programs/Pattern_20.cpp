/* 
*****
 ****
  ***
   **
    *
*/
#include<iostream>
using namespace std;

int main()
{
    int row=5,space,i,j;

    for(i=1;i<=row;i++)
    {
        for(space=1;space<=i-1;space++)
        {
            cout<<" ";
        }
        
        for(j=5;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
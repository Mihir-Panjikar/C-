/* 
write a function in C++ that takes 2 integer arguments,
a and b and returns the value of a raised to b without using the standard library function (pow).
if the second argument is missing than the function should return the square of a.
*/
#include<iostream>
using namespace std;

int power(int a,int b=1)
{
    int j;

    j=a;
    for(int i=1;i<b;i++)
    {
        a*=j;
    }
    return a;
}

int main()
{
    int a,b,x;
    
    cout<<"Enter 1 to get the power value of the number\nEnter 2 to get the square of the number"<<endl;
    cin>>x;

    switch(x)
    {
        case 1:
        cout<<endl<<"Enter a number and the power for it"<<endl;
        cin>>a>>b;
        cout<<endl<<power(a,b);
        break;

        case 2:
        cout<<endl<<"Enter a number"<<endl;
        cin>>a;
        cout<<endl<<power(a);

    }


}

/* 
Write a user-defined function in C++ to find the sum of the following series for n-terms.
The function should accept the number of terms as its argument and return the sum.
(1/1!+(1+3)/2!+(1+3+5)/3!+...+n terms)
*/

#include<iostream>
using namespace std;

float factorial(int n)
{
    int i,j,k;
    double num_sum,deno_sum,sum,facto;
    sum=0;

    for(i=1;i<=n;i++)
    {
        num_sum=0;
        for(j=1;j<=i;j++)
        {
            num_sum+=(2*j-1);
        }

        facto=1;
        for(k=1;k<=i;k++)
        {
            facto*=k;
        }
        sum+=(num_sum/facto);
    }
    
    return sum;
}

int main()
{
    int num;

    cout<<"Enter a number for n terms"<<endl;
    cin>>num;

    cout<<factorial(num);
}
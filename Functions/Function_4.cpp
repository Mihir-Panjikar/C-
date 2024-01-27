/* 
1-(x^2/2!)+(x^4/4!)-(x^6/6!)+...+(x^n/n!)
*/

#include<iostream>
#include<cmath>
using namespace std;

float factorial(int n,int x)
{
    int i,j,k;
    double num_sum,deno_sum,sum,facto;
    sum=1;

    for(i=1;i<n;i++)
    {    
        num_sum=pow(x,2*i);

        facto=1;
        for(k=1;k<=2*i;k++)
        {
            facto*=k;
        }
        
        if(i%2==0)
        sum+=(num_sum/facto);

        else
        sum-=(num_sum/facto);

    }
    
    return sum;
}

int main()
{
    int num,var;

    cout<<"Enter a number for n terms and the value of x"<<endl;
    cin>>num>>var;

    cout<<factorial(num,var);
}


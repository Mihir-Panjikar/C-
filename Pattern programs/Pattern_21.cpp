/*
write a user defined function series() having 2 parameters, x of type double 
and n of type integer to find and return the sum of the series given below

x+(x^2/3!)+(x^3/5!)+.....+(x^n/(2n-1)!)
*/

#include<iostream>
#include<cmath>
using namespace std;

double series(double x,int n)
{
    double sum=x;
    double fact;
    //int k;

    //cout<<endl<<"Enter the number of terms"<<endl;
    //cin>>k;

    for(int i=1;i<n;i++)
    {
        fact=1;
        for(int j=1;j<(2*(i+1));j++)
        {
            fact=fact*j;
        }

        sum+=(pow(x,i+1))/fact;
    }

    return sum;
}

int main()
{
    double x;
    int n;

    cout<<"Enter the value of x and n"<<endl;
    cin>>x>>n;
    cout<<endl<<"Sum of series is "<<series(x,n);
}
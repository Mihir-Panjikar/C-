#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number1,number2,total;

    number1= 100;
    number2= 345;
    total=number1+number2;

    cout<<setfill('@')<<endl;
    cout<<setw(5)<<number1<<"+"<<setw(5)<<number2<<"="<<setw(5)<<total<<endl;

}
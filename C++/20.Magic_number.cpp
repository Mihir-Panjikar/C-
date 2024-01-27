//

#include<iostream>
using namespace std;

int main()
{
    int num,num_rev,original_num,rem,sum,sum1,num1;

    cout<<"Enter a number"<<endl;
    cin>>num;

    original_num=num;
    do
    {
        rem = num%10;
        sum+=rem;
        num /= 10;
    }
    while(num != 0);

    num1=sum;
    do
    {
        rem = sum%10;
        num_rev = num_rev*10 + rem;
        sum /= 10;
    }
    while(sum != 0);

    sum1=num_rev*num1;

    if(sum1==original_num)
    {
        cout<<"\nIt is a magic number";
    }

    else
    {
        cout<<"\nIt is not a magic number";
    }


}
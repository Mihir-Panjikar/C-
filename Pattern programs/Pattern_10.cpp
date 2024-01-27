/* 
1 2 1 5
2 4 3 4
3 6 5 3
4 8 7 2
5 10 9 1
*/

#include<iostream>
using namespace std;

int main()
{
    for(int i=1,n=6;i<=5;i++)
    {
        cout<<i<<"  ";
        cout<<2*i<<"  ";
        cout<<i*2-1<<"  ";
        cout<<n-i<<endl;
    }
}
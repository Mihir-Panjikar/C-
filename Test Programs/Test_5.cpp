/* 
Write a complete C++ program to display all the Armstrong numbers in between the range of 100 to 1000. 
Note: Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers. 
*/

#include<iostream>
using namespace std;

int main()
{
    int i,sum=0,rem,cube,num;
	
	for(i=101;i<1000;i++)
    {
        sum=0;
        num=i;
        do
	    {
            rem = num%10;
            cube=rem*rem*rem;
            sum+=cube;
            num/=10;
	    }
	    while(num>0);

        if(i==sum)
	    {
		    cout<<sum<<" ";
	    }
    }
	
}
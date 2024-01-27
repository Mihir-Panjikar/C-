//A C++ program to find the age of the user in previous or current or following year

#include<iostream>
using namespace std;

 int main()
 {
    int cur_year,age,ano_year,fut_age;

    cout<<"Enter the current year and your current age and another year\n";
    cin>>cur_year>>age>>ano_year;

    fut_age= age + (ano_year-cur_year);

    if(fut_age<0)
    {
        cout<<"\nThe user was not born during or before that year";
        return 0;
    }
    cout<<"\nThe age of the user in " <<ano_year<<" will be "<<fut_age;

 }
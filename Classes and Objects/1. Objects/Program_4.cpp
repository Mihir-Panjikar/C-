/*

Define a class book with complete function definitions in C++ with the following specifications.

Private:

Book_No of type integer
Book_title of type string, size[3]
Price : of type float

Total_cost() .To compute the total cost to be paid as price 
* N_copies where N_copies is the number of copies passed as an argument to the function.

Public:

Input() : To take input for Book_No, Book_title, Price
Purchase(): To take input for N_copies and display total cost by calling function Total_Cost()

Write a function main() to declare an array of objects and call the necessary functions 
for N books(N<=10) where N is the number of books to be purchased.

*/

#include<iostream>
using namespace std;

class book
{
    private:

    int Book_No;
    string Book_title;
    float Price;

    float Total_cost(int n)
    {
        return (Price*n);
    }

    public: int Input()
    {
        cout<<"Enter the Book no, Book title and price"<<endl;
        cin>>Book_No>>Book_title>>Price;
    }

    public: int purchase()
    {
        int n;
        cout<<endl<<"Enter the no. of copies"<<endl;
        cin>>n;
        cout<<endl<<"Total cost is: "<<Total_cost(n)<<endl;
    }

};

int main()
{
    book b1[10];
    int n;
    
    cout<<"Enter the no. of books to be purchased"<<endl;
    cin>>n;
    cout<<endl;

    for(int i=0;i<=n;i++)
    {
        cout<<endl<<"Enter the data for book :"<<i+1<<endl;
        b1[i].Input();
        b1[i].purchase();
    }
}
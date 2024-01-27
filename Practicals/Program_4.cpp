/*
C++ program on Sparse matrix and 3-tuple representation

Define a class named SPARSE consisting of the following members:
i) M,N: to type unsigned short integer under private visibility label.
ii) S,T: 2-D Arrays of size 10x10 and 50x3 respectively.
iii) Define a default constructor to accept data members M and N (Where MxN is size of S). 
    It also accepts 2-D Array (sparse matrix) S and further calls function process().
iv) Define a private member function process() which creates a 3-TUPLE from 2-D Array S (Sparse Matrix). 
    It further displays 2-D Array T in a tabular form.
Write a relevant main function to complete the program.
*/

#include<iostream>
using namespace std;

class SPARSE
{
    unsigned short int M,N;
    int S[10][10],T[50][3];
    
    public: 
    
    SPARSE()
    {
        cout<<"Enter the dimensions for the matrix"<<endl;
        cin>>M>>N;
        cout<<endl;

        cout<<"Enter the values for the matrix"<<endl;
        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
                cin>>S[i][j];

        cout<<endl;
        
        Process();
    }

    private:

    int Process()
    {
        int count=0,k=1;
        
        T[0][0]=M;
        T[0][1]=N;

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(S[i][j])
                {
                    count++;
                    T[k][0]=i;
                    T[k][1]=j;
                    T[k][2]=S[i][j];
                    k++;
                }
            }    
        }   

        T[0][2]=count;

        cout<<"The 3 Tuple representation:"<<endl;

        for(int i=0;i<=count;i++)
        {
            for(int j=0;j<=2;j++)
            {
                if(i==0 && j==0)
                cout<<"Rows\tColumns\tValues"<<endl;

                cout<<T[i][j]<<"\t";
            }    
            
            cout<<endl;
        }   
    }
};

int main()
{
    SPARSE A1;
}
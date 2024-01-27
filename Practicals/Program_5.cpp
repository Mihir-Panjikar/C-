/*
Define a class named MATRIX consisting of the following members:
i) M, N, Q: of type short unsigned integer under private visibility label.
ii) A, B, C: 2-D Arrays of size 10x10 each private visibility label.
iii) Define a default constructor to accept data members M,N and Q (Where MxN is size of A and NxQ is size of B).
    It also accepts 2-D Array A and B. It further calls function product().
iv) Define a private member function named product which computes product of two matrice’s A and B and
    stores in C. It further displays matrice C in tabular form.
Write a relevant main function to complete the program.
*/

#include<iostream>
using namespace std;

class MATRIX
{
    unsigned int M,N,Q;
    int A[10][10],B[10][10],C[10][10],sum;

    public:

    MATRIX()
    {
        cout<<"Enter the dimensions M,N for A and Q for B"<<endl;
        cin>>M>>N>>Q;
        cout<<endl;

        cout<<"Enter the values for array A"<<endl;
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>A[i][j];
            }
        }
        cout<<endl;
        
        cout<<"Enter the values for array B"<<endl;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<Q;j++)
            {
                cin>>B[i][j];
            }
        }
        cout<<endl;

        Product();
    }

    private:

    int Product()
    {
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<Q;j++)
            {
                sum=0;
                for(int k=0;k<N;k++)
                {
                    sum+=A[i][k]*B[k][j];
                }
                C[i][j]=sum;
            }
        }

        cout<<"A x B = C:"<<endl;
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<Q;j++)
            {
                cout<<C[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};

int main()
{
    MATRIX M1;
}
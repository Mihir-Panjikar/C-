/*
Define a user defined function named swaprow() in c++ to swap(interchange) the elements of
the first row with the elements of the last row for a 2-D array of size m * n. (m – number of rows and
n-number of columns). The function should accept the matrix and the number of rows and columns
as its arguments and display the resultant matrix. (March 2017) (3)
Note: The user should not create another matrix.
E.g. : if the input is:
2 14 9
1 3 7 7
5 8 6 3
7 2 1 2
Then the output should be :
7 2 1 2
1 3 7 7
5 8 6 3
2 1 4 9
*/

#include<iostream>
using namespace std;

int swaprow(int A[10][10],int M,int N)
{
    int swap=0,i=M-1,j,k;
    
        for(j=0;j<N;j++)
        {
            swap=A[i][j];
            A[i][j]=A[0][j];
            A[0][j]=swap;
        }

    cout<<endl<<"Output After Process: "<<endl;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            cout<<A[i][j]<<"\t";

        cout<<endl;
    }
}

int main()
{
    int A[10][10],M,N;

    cout<<"Enter size of the matrix: "<<endl;
    cin>>M>>N;

    cout<<endl<<"Enter elements of the matrix: "<<endl;
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin>>A[i][j];

    swaprow(A,M,N);
    
}
//Bubble sort

#include<iostream>
using namespace std;

int main()
{
    int i,j,swap,temp,n,a[10];

    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


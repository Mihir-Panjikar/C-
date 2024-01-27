//Insertion sort

#include<iostream>
using namespace std;

int main()
{
    int i,j,key,n,a[10];

    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
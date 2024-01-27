//Selection sort

#include<iostream>
using namespace std;

int main()
{
    int i,j,min,temp,n,a[10];

    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
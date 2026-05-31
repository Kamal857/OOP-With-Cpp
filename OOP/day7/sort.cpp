#include<iostream>
using namespace std;
int main()

{
    int n,i,j,temp;
    cout<<"Enter terms :";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Elements: ";
        cin>>a[i];

    }
    cout<<"Ascending Sorted Details are :"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

               

            }

        }
    }
    for(i=0;i<n;i++)
    {
         cout<<a[i]<<endl;
    }
    cout<<"The Descending Order is : "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

                

            }

        }
    }
    for(i=0;i<n;i++)
    {
         cout<<a[i]<<endl;
    }
    return 0;
    
}
//array in cpp
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the term : ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int small=a[0];
    for(i=0;i<n;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
        
    }
    int large=a[0];
    for(i=0;i<n;i++)
    {
        if(large<a[i])
        {
            large=a[i];
        }
    }

    cout<<"The largest number is :"<<large<<endl;
    cout<<"The smalllest number is : "<<small<<endl;
    

    return 0;
}
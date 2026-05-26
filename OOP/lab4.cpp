#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c;
    int n,i;
    cout<<"Enter the term n ";
    cin>>n;
    cout<<0<<" ";
    cout<<1<<" ";
    for(i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;


    }
    return 0;
}
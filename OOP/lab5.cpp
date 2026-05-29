//2 3 5 9 17 33 87
#include<iostream>
using namespace std;
int  main()
{
    int x=2;
    int n;
    int i;
    int k=2;
    cout<<"Enter the terms : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<x;
        x=k*x-1;

    }
    return 0;

}
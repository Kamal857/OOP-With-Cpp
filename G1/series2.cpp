//1 5 15 25 35 45 .... nth term
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter terms :";
    cin>>n;
    cout<<"1 5 15";
    int x=15;
    for(int i=0;i<n-3;i++)
    {
        x=x+10;
        cout<<" "<<x<<" ";


    }
    return 0;
}
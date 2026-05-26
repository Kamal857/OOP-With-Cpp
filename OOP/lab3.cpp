// 1 5 10 15 25 36 49
#include<iostream>
using namespace std;
int main()
{
    int a;
    
    int i,n;
    int k=5;
    cout<<"Enter the number of terms : ";
    cin>>n;
    cout<<1<<" ";
    cout<<5<<" ";
    cout<<10<<" ";
    cout<<15<<" ";
  
    for(i=0;i<n-4;i++)
     {
        a=k*k;
        cout<<a<<" ";
        k++;


    }
    return 0;
}
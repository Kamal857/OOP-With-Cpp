// pattern  0 2 4 6 8 9 12 15 16 20 24 .........n
#include<iostream>
using namespace std;
int main()
{
    int n,k=2,p=2,sum=0,h;
    cout<<"Enter the term n:  ";
    cin>>n;
    int i;
    cout<<0<<" ";
    cout<<2<<" ";
    for(i=2;i<n;i++)
    {
        for(h=0;h<3;h++)
        {
            sum=p*k;
            cout<<sum<<" ";
            k++;
        }
        p++;
        k=k-2;

    }
    return 0;

}
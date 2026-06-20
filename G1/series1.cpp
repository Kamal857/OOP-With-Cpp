//0 2 4 6 8 9 12 15 16 20 24 25
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the terms You want :";
    cin>>n;
    cout<<"0 2";
    int k=2,l=2;
    int c=0;
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int p=k*l;
            l++;
            cout<<" "<<p<<" ";
            c=c+1;
            if(c==n-2)
            {
                goto x;
            }



        }
       

    }
    x:
     cout<<" ";
    return 0;
}
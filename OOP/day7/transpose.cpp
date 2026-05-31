#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the matrix form N :";
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

        {
            cout<<"Enter the Matrix element"<<i+1<<" "<<j+1<<endl;
            cin>>a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    

    cout<<"Transpose of matrix is "<<endl;
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
        
    return 0;
}
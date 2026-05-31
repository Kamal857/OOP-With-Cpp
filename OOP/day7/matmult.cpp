#include<iostream>
using namespace std;
int main()
{
    int x,y,i,j,k;
    cout<<"Enter MAtrix Rows and columns : ";
    cin>>x>>y;
    int a[x][y],b[x][y],c[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++){

            cout<<"Enter the elements of Mat A: "<<endl;
            cin>>a[i][j];
        }
        
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++){

            cout<<"Enter the elements of Mat B: "<<endl;
            cin>>b[i][j];
        }
        
    }

    cout<<"Matrix Mutiplication of A And B is : "<<endl;
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
         c[i][j]=0;
          for(k=0;k<x;k++)
            {
                c[i][j]+= (a[i][k])*b[k][j];
            }   
            
        }
       
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++){

            cout<<c[i][j]<<"\t";
            
        }
        cout<<"\n";
        
    }
    return 0;
}
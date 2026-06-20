#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int c=n;
    int rem=0;
    int arm=0;
    while(n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
        
    }
    if(c==arm)
    {
        cout<<"Armstrong number ";

    }
    else
    {
        cout<<"Not a Armstrong ";

    }

    return 0;
}
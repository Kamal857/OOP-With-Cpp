#include<iostream>
using namespace std;
int main()
{
    int n;
    float a,b,c;
    cout<<"1.Addition "<<endl;
    cout<<"2.Subtraction "<<endl;
    cout<<"3.Multiplication "<<endl;
    cout<<"4.Divison "<<endl;
   1
    cout<<"Enter Your choice : ";
    cin>>n;
    switch (n)
    {
        case 1:
            cout<<"Enter Two Numbers : ";
            cin>>a>>b;
            c=a+b;
            cout<<"Addition of "<<a<<"and "<<b<<"is "<<c<<endl;
            break;
        case 2:  
            cout<<"Enter Two Numbers : ";
            cin>>a>>b;
            c=a-b;
            cout<<"Subtraction of "<<a<<"and "<<b<<"is "<<c<<endl;
            break;
        case 3:
            cout<<"Enter Two Numbers : ";
            cin>>a>>b;
            c=a*b;
            cout<<"Multiplication of "<<a<<"and "<<b<<"is "<<c<<endl;
            break;
        case 4:
            cout<<"Enter Two Numbers : ";
            cin>>a>>b;
            c=a/b;
            cout<<"Division of "<<a<<"and "<<b<<"is "<<c<<endl;
            break;
        default :
            cout<<"Enter Correct choice"; 
            

    }

    return 0;
}
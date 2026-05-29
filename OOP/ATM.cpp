#include<iostream>
using namespace std;
int main()
{
     int n,checkpin=0;
     int pin=1234;
     float balance=123456,withdraw=0;
     int block=0;
     
    
    while(block!=3){
        cout<<"_________ATM___________"<<endl;
    cout<<"\t 1.Check Balance "<<endl;
    cout<<"\t 2.Withdraw "<<endl;
    cout<<"\t 3.Change Pin "<<endl;
    cout<<"\t 4.Exit "<<endl;
    cout<<endl;
    cout<<"\t Enter Your choice : ";
    cin>>n;

    switch(n)
    {
        case 1:
            cout<<"Enter Your Pin : ";
            cin>>checkpin;
            if(checkpin==pin)
            {
                cout<<"Your Balance is RS "<<balance<<endl;
                break;
            }
            else{
                cout<<"Worng Pin"<<endl;
                block=block+1;
                break;
            }
        case 2:
            cout<<"Enter Your Pin : ";
            cin>>checkpin;
            if(checkpin==pin)
            {
                cout<<"Enter Withdrawn Amount : ";
                cin>>withdraw;
                

            }
            else
            {

            }
            
    }

    }
    cout<<"Card Blocked";
    
    return 0;
}
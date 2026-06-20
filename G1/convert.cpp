//to convert the milligram to kilogram and litre to mililitre
#include<iostream>
using namespace std;
int main()
{

    float mg,kg,l,ml;
    cout<<"Enter the weight in Mg";
    cin>>mg;
    kg=mg/1000;
    cout<<"The convert wight of"<<mg<<" is "<<kg<<"kg"<<endl;
    cout<<"Enter the liquid litre"<<endl;
    cin>>l;
    ml=1000*l;
     cout<<"The convert liquid of"<<l<<" is "<<ml<<"ml"<<endl;
    return 1;
}
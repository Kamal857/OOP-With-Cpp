#include<iostream>
using namespace std;
int main()
{
    float marks;
    cout<<"Enter Marks : ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"Grade is A";

    }
    else if(marks>=85 && marks<90)
     {
        cout<<"Grade is A-";

     }
    else if(marks>=80 && marks<85)
    {
        cout<<"Grade is B+";
    }
    else if(marks>=75 && marks<80)
    {
        cout<<"Grade is B";
    }
    else if(marks>=70 && marks<75)
    {
        cout<<"Grade is C";
    }
    else{
        cout<<"Grade is F";
    }
return 0;
}

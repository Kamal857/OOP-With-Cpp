#include<iostream>
using namespace std;
int main()
{
    float s1,s2,s3,s4,s5;
    float per;
    cout<<"Enter the marks of 5  Subjects :";
    cin>>s1>>s2>>s3>>s4>>s5;
    per=(s1+s2+s3+s4+s5)/5;
     if(per>=90)
    {
        cout<<"Grade is A";

    }
    else if(per>=85 && per<90)
     {
        cout<<"Grade is A-";

     }
    else if(per>=80 && per<85)
    {
        cout<<"Grade is B+";
    }
    else if(per>=75 && per<80)
    {
        cout<<"Grade is B";
    }
    else if(per>=70 && per<75)
    {
        cout<<"Grade is C";
    }
    else{
        cout<<"Grade is F";
    }

    return 0;
}
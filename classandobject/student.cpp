//to get the student details by calculating the 5 subject marks of the student and displaying the rank by calculating the gps
#include<iostream>
using namespace std;
class student
{
    int roll;
    string name;
    float m1,m2,m3,m4,m5;
    float p;
    float gpa;
    int rank;
    public:
    float g()
    {
        gpa=per()/25;
        return gpa;
    }
    float  per()
    {
        p=(m1+m2+m3+m4+m5)/5;
        return p;
    }
     void getdata()
     {
        cout<<"ENter name roll and marks in 5 subjects : ";
        cin>>name>>roll>>m1>>m2>>m3>>m4>>m5;
        per();
        g();
     }
     void r(int x)
     {
        rank=x;
        

     }
     float getgpa()
     {
        return gpa;
     }
     void display()
     {
        cout<<endl;
        cout<<"Rank: "<<rank<<"  "<<name<<"  "<<p<<"%"<<" "<<gpa<<" GPA"<<endl;
     }
};
int main()
{
    int n; cout<<"Enter the number of Student : ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].getgpa()<s[j].getgpa())
            {
                student temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        s[i].r(i+1);
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
   
    return 0;
}
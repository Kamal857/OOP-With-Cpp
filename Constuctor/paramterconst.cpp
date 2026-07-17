#include<iostream>
using namespace std;
class student
{
    int id;
    string name;
    float m1,m2,m3;
    float p;
    public:
    student()
    {
        id=0;
        name=" ";
        m1=0;
        m2=0;
        m3=0;
    }
    student(int i,string n,float a,float b,float c)
    {
        id=i;
        name=n;
        m1=a;
        m2=b;
        m3=c;
        per();
    }
    float per()
    {
        p=(m1+m2+m3)/3;
        return p;
    }
    void display()
    {
        cout<<"Id: "<<id<<" Name: "<<name<<" Percentage: "<<p<<endl;
    }
};
int main()
{
    int n; cout<<"Enter the number of Student : ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        int id; string name; float m1,m2,m3;
        cout<<"Enter id name and marks in 3 subjects of student "<<i+1<<": ";
        cin>>id>>name>>m1>>m2>>m3;
        s[i]=student(id,name,m1,m2,m3);
    }
    for(int i=0;i<n;i++)
    {
        s[i].display();
    }
    return 0;
}
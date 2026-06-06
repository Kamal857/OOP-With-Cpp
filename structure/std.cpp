#include<iostream>
using namespace std;
struct student 
{
 public:
  int roll;
  string name;
  float per;
  float gpa;

  int rank;
  float s1,s2,s3,s4,s5;

};
int main()
{
    int n;
    cout<<"Enter the number of Students : ";
    cin>>n;
    struct  student s[n];
    int roll;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name  roll :";
        cin>>s[i].name>>s[i].roll;
        cout<<"Enter Marks of 5 Subjects: ";
        cin>>s[i].s1>>s[i].s2>>s[i].s3>>s[i].s4>>s[i].s5;
        s[i].per=(s[i].s1+s[i].s2+s[i].s3+s[i].s4+s[i].s5)/5;
        s[i].gpa=(s[i].per)/25;




    }
    
   
    for(int i=0;i<n;i++)
    {
        s[i].rank=1;
        for(int j=0;j<n;j++)
        {
             
            if(s[i].gpa<s[j].gpa)
             {
                s[i].rank++; 
            }
        }
        
    }
   

    while(1){
        cout<<"Enter the roll no of student to know rank :";
        cin>>roll;
        for(int i=0;i<n;i++)
        {
            if(roll==s[i].roll)
            {
            cout<<"Name :"<<s[i].name<<endl;
            cout<<"Percentage : "<<s[i].per<<endl;
            cout<<"GPA :"<<s[i].gpa<<endl;
            cout<<"Rank: "<<s[i].rank<<endl;
            
            }
    }
   

    }
    
    
   return 0;

}
#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        string name;
        float s1,s2,s3,s4,s5;
        int rank;
        float gpa;
        float per;
    public:
        void setter()
        {
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Roll No: ";
            cin>>roll;
            cout<<"Enter Marks of 5 Subjects : ";
            cin>>s1>>s2>>s3>>s4>>s5;
            per=(s1+s2+s3+s4+s5)/500;
            gpa=per/25;



        }
        
        void ranker(student s[],int n)
        {
            for(int i=0;i<n;i++)
            {
                s[i].rank=1;
                for( int j=0;j<n;j++)
                {
                    if(s[i].gpa<s[j].gpa)
                    {
                        s[i].rank++;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                     if(i+1==s[j].rank)
                     {
                        cout<<"RANK ="<<s[i].rank<<" "<<s[i].name<<endl;
                        
                     }
                
                }
               
            }
            

        }
        void rollby()
        {

        }
};
int main()
{
    int n;
    cout<<"Enter the number of student :";
    cin>>n;
    student s[n];

    for(int i=0;i<n;i++)
    {
        s[i].setter();

    }
    cout<<"Successfully Added Details of Student..."<<endl;
    cout<<"-----------------------------------"<<endl;



    cout<<"1. DO you wan to see result by rank wise? "<<endl;
    cout<<"2.Enter ROll no to see the Student info"<<endl;
    cout<<"\tEnter Your Chioce: ";
    int ch;
    cin>>ch;

    switch (ch)
    {
        case 1:
            
            
                s[0].ranker(s,n);
                break;

    }



    return 0;

}
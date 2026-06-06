//to enter details of n student and display these records according to the roll numbers

#include<iostream>
using namespace std;
class student
{
    private:
        int roll;
        string name;
        string college_name;
    
    public:
        void setter(int r, string n, string cn)
        {
            roll=r;
            name=n;
            college_name=cn;
        }
        void getter(int i)
        {
            int x=0;
            for(i=0;i<n;i++)
            {
                if(s[i].roll==x)
                {
                    cout<<"Name: "<<name<<end;
                    cout<<"College Name <<"<college_name<<endl;
                    cout<<"Roll No: "<<roll<<endl;
                    x++;



                }
            }
        
        }
};
int main()
{
    string n,cn;
    int n,i,r;
    cout<<"Enter the number of student :";
    student s[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Roll Name and College name : ";
        cin>>r>>n>>cn;
        s[i].setter(r,n,cn);
    }

    
        
            s.getter(i);
        
    
    return 0;
}
#include<iostream>
using namespace std;
class student
{
    private :
        int roll;
        string name;
        string college;
        long int contact;
    public: 
        void  setter();  //declaration 
        void getter(int); //declaration 
};

void student::setter()
{
   

    
    cout<<"Enter Your name: "<<endl;
    cin>>name;
    cout<<"Enter Your Roll number :"<<endl;
    cin>>roll;
    cout<<"Enter Your College Name :"<<endl;
    cin>>college;
    cout<<"Enter Your Contact Number :"<<endl;
    cin>>contact;
    


}
void student::getter(int r)
{    
    
    
        if(roll==r)
        {
            cout<<"Name : "<<name<<endl;
            cout<<"College : "<<college<<endl;
            cout<<"Contact : "<<contact<<endl;
           

        }
    

}

int main()
{
    int n;
    int r ;
    cout<<"Enter the number of student do you want to add details"<<endl;
    cin>>n;
    student s[n];

     for(int i=0;i<n;i++)
     {
        s[i].setter();
     }

    cout<<"Enter a the roll number of student which you want to find :"<<endl;
    cin>>r;
    for( int i=0;i<n;i++)
    {
        s[i].getter(r);
        
    }
  return 0;

}

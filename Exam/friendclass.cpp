#include<iostream>
using namespace std;
class student 
{
    private:
    int id;
    string name;
    string faculty;
    float m1,m2,m3;
    float per;
    
   public:
     void setter()
     {
        cout<<"Enter id name and faculty marks in  3 subjects :";
        cin>>id>>name>>faculty>>m1>>m2>>m3;
        per=(m1+m2+m3)/3;

     }

     friend class result;

};
class result
{
    public:
     void show(student s)
     {

     
     cout<<"Name : "<<s.name<<endl;
     cout<<"Faculty : "<<s.faculty<<endl;
     cout<<"Percenatge: "<<s.per<<endl;
     if(s.per>=90)
     {
        cout<<"Distinction"<<endl;
     }
     else if(s.per>=80 && s.per<90)
     {
        cout<<"1st Division";

     }
     else if(s.per>=70 && s.per<80)
     {
        cout<<"2nd Division";

     }
     else if(s.per>=60 && s.per<70)
     {
        cout<<"3rd Division";

     }
     else{
        cout<<"Fail";
     }
   }

};
int main()
{
    student s1;
    result r;
    s1.setter();
    r.show(s1);
}
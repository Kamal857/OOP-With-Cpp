//to make a class name employee and have some attributes like employee id name and salary and show them using getter and setter
#include<iostream>
using namespace std;
class employee
{
 private:
    string emp_name;
    int emp_id;
    float salary;

 public:
    void setter(string n, float s, int id )
    {
        emp_name=n;
        emp_id=id;
        salary= s;
    };
    void getter ()
    {
        cout<<endl;
        cout<<"Name: "<<emp_name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Employee ID : "<<emp_id<<endl;

    }
};
int main()
{
    employee e1;
    string name;
    float salary;
    int id;
    cout<<"Enter The name of employee :"<<endl;
    cin>>name;
    cout<<endl;
    cout<<"Enter Employee Id and Salary :"<<endl;
    cin>>id>>salary;
    cout<<endl;
    e1.setter(name,salary,id);
    e1.getter();
    return 0;

}
#include<iostream>
using namespace std;
class school
{   
    protected:
    string name;
    string address;
    public:
    void setschool()
    {
        cout<<"Enter School Name : ";
        cin>>name;
        cout<<"Enter Address: ";
        cin>>address;

        
    }
    string getschoolname()
    {
        return name;
    }
    string getaddress()
    {
        return address;
    }

};
class teacher: public school
{
    protected:
    string name;
    int age;
    string contact;
    float salary;
    string subjects;
    public:
    void getdata()
    {
        cout<<"Enter Name  age contact : ";
        cin>>name>>age>>contact;
        cout<<endl<<"Enter Salary and Subjects Taught : ";
        cin>>salary>>subjects;
        
    };
    void disp()
    {
        cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<name<<"           "<<age<<"             "<<contact<<"             "<<"RS"<<salary<<"           "<<subjects<<endl;
        

    }


};
int main()
{
    int choice;
    teacher t[10];
    //student s[100];
    int tcount=0; //scount=0;

do
{
    cout << "\n===== School Management System =====\n";
    cout << "1. Add Student\n";
    cout << "2. Add Teacher\n";
    cout << "3. Display Students\n";
    cout << "4. Display Teachers\n";
    cout << "5. Exit\n";

    cin >> choice;

    switch(choice)
    {
        case 1:
          //  s[scount].getdata();
          //  scount++;
            break;

        case 2:
            t[tcount].getdata();
            tcount++;
            break;

        case 3:
         
           // for(int i=0; i<scount; i++)
           // {
           //     s[i].disp();
           // }
            break;

        case 4:
            cout<<"Name        ||  Age         ||  Contact      ||  Salary      ||  Subjects Taught"<<endl;
            for(int i=0; i<tcount; i++)
            {
                t[i].disp();
            }
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice";
    }

} while(choice != 5);
    return 0;
    
}
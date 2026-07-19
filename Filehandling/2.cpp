#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fon;
    fon.open("userinfo.txt",ios::out);
    if(!fon)
    {
        cout<<"Error While Opening File ..";
    }
    else
    {
        int x=3;
        while(1)
        {
            int age;
            string name;
            cout<<"Enter Details Like "<<endl;
            cout<<"Name:";
            cin>>name;
            cout<<"Age : ";
            cin>>age;
            fon<<name<<" "<<age<<endl;
            if(x==5)
            {
                goto label;
            }
            else{
                x++;
            }
        }

    }
    label:
     fon.close();
     return 0;


}
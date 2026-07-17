#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("std.txt");
    string name[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Name Of Student: ";
        cin>>name[i];
        fout<<name[i];
        

    }
    fout.close();
    return 0;
}


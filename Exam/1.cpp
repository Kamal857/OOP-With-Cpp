//wap in c++ to convert the height into meter and feet and inch 
#include<iostream>
using namespace std;
class height
{
    private:
    float height;

    public:
        void setter(float x)
        {
            height=x;
        }
        void getter()
        {
            float foot= 3.28084*height;
            float inch=foot*12;
            cout<<"The height of "<<height<<"Meter is : "<<foot<<" Feet and"<<endl;
            cout<<"The height of "<<height<<"Meter is : "<<inch<<" inch."<<endl;

        }
};
int main()
{
    float k;
     height h;
     cout<<"Enter height :";
     cin>>k;
     h.setter(k);
     h.getter();
     return 0;

}
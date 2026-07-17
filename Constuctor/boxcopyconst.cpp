#include<iostream>
using namespace std;
class box
{
    float length;
    float breadth;
    float height;
    public:
    box()
    {
        length=0;
        breadth=0;
        height=0;
    }
    box(float l,float b,float h)
    {
        length=l;
        breadth=b;
        height=h;
    };
    box(box &b)
    {
        length=b.length;
        breadth=b.breadth;
        height=b.height;
    }
    float volume()
    {
        return length*breadth*height;
    }
    void 
void display()
    {
        cout<<"Length: "<<length<<" Breadth: "<<breadth<<" Height: "<<height<<" Volume: "<<volume()<<endl;
    }
   

};
int main()
{
    int n; cout<<"Enter the number of boxes : ";
    cin>>n;
    box b[n];
    for(int i=0;i<n;i++)
    {
        float l,b,h;
        cout<<"Enter length breadth and height of box "<<i+1<<": ";
        cin>>l>>b>>h;
        b[i]=box(l,b,h);
    }
    for(int i=0;i<n;i++)
    {
        b[i].display();
    }
    return 0;
}
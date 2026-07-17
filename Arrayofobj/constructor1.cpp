#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
    float perimeter()
    {
        return 2*(length+breadth);
    }
    void display()
    {
        cout<<"Length: "<<length<<" Breadth: "<<breadth<<" Area: "<<area()<<" Perimeter: "<<perimeter()<<endl;
    }
};
int main()
{
    int n; cout<<"Enter the number of rectangles : ";
    cin>>n;
    rectangle r[n];
    for(int i=0;i<n;i++)
    {
        float l,b;
        cout<<"Enter length and breadth of rectangle "<<i+1<<": ";
        cin>>l>>b;
        r[i]=rectangle(l,b);
    }
    for(int i=0;i<n;i++)
    {
        r[i].display();
    }
    return 0;
}
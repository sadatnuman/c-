#include<iostream>
using namespace std;
class Rectangle
{
private :
float     length;
float breadth;
public:
    float area;
    void setlenbre(float a, float b)
    {
        length=a;
        breadth=b;
        area=length*breadth;
    }


    float returnarea()
    {
        return area;
    }
};
int main()
{
    float a,b;
    cout<<"Enter length : ";
    cin>>a;
    cout<<"Enter breadth : ";
    cin>>b;
    Rectangle c;
    c.setlenbre(a,b);
    cout<<"Area of the rectangle is : "<<c.returnarea();
    cout<<endl;



}


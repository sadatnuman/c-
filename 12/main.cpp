#include<iostream>
using namespace std;
class box
{
private:
    float length,breadth,height;
public:
    float vol;
    void setvalue(float a, float b, float c)
    {
        length=a;
        breadth=b;
        height=c;
        vol=length*breadth*height;
    }
    void getvalue()
    {
        cout<<"length of the box : "<<length<<endl;
        cout<<"breadth of the box : "<<breadth<<endl;
        cout<<"height of the box : "<<height<<endl;
        cout<<"Volume of the box : "<<vol;
    }
};
int main()
{
    float l,m,n;
    cout<<"Enter Length , Breadth and Height : ";
    cin>>l>>m>>n;
    box d;
    d.setvalue(l,m,n);
    d.getvalue();
    cout<<endl;
    cout<<endl;
}

#include<iostream>
using namespace std;
class student
{
public:
    int roll, phone;
private:
    string address;
public:
    void add(string x)
    {
        address=x;

    }
    void display()
    {
        cout<<roll<<endl<<phone<<endl<<address;
    }
};
int main()
{
    student Sam,John;
    Sam.roll=4;
    Sam.phone=1969259503;
    Sam.add("Basundhora R/A");
    cout<<"information of Sam : "<<endl;
    Sam.display();
    cout<<endl;
    cout<<endl;
    cout<<"information of John : "<<endl;
    John.roll=1;
    John.phone=1645489811;
    John.add("Basundhora R/A");
    John.display();
    cout<<endl;
    cout<<endl;
}


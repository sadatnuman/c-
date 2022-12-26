#include<iostream>
using namespace std;
class employee
{
private :
    string name;
    float salary;
public:
    int year;
    string address;
    void info(string x, float y)
    {
        name=x;
        salary=y;
    }

    void display()
    {

        cout<<name<<"     "<<year<<"     "<<salary<<"     "<<address<<endl;
    }
};
int main()
{
    cout<<"Name   Joining year    Salary     Address"<<endl;
    employee Numan,jannat,Hasib;
    Numan.info("Robert",50000);
    Numan.year=2017;
    Numan.address="Rajbari";
    Numan.display();
    jannat.info("Sam",75000);
    jannat.year=2019;
    jannat.address="Dhaka";
    jannat.display();
    Hasib.info("John",50000);
    Hasib.year=1990;
    Hasib.address="Bonani";
    Hasib.display();
}


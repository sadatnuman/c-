#include<iostream>
using namespace std;
class account
{
private:
    string ac_name;
    int ac_no;
    int balance;
public:
    int amount;
    int total;
    void setinfo(string x, int y, int z)
    {
        ac_name=x;
        ac_no=y;
        balance=z;
    }
    void getinfo()
    {
        cout<<"Account information : "<<ac_name<<" "<<ac_no<<" "<<balance<<endl;
    }

    account (int x)
    {
        cout<<"enter amount of deposit : ";
       cin>>amount;
    }
    account()
    {
        cout<<"enter amount of withdrawn money : ";
        cin>>amount;
        amount=-amount;

    }
    ~account()
    {
        cout<<"amount of deposit or withdraw : "<<amount<<endl;
    }
    void display()
    {
        total=amount+balance;
        cout<<"Balance is : "<<balance<<endl;
        cout<<"net balance : "<<total<<endl;
    }
};
int main()
{
    string a;
    int b,c;
    cout<<"enter account name : ";
    cin>>a;
    cout<<"enter account no : ";
    cin>>b;
    cout<<"enter balance : ";
    cin>>c;
    account info(2);
    info.setinfo(a,b,c);
    info.getinfo();
    info.display();

}


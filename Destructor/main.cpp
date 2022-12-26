#include<iostream>
using namespace std;
class A{
    int x=0;
public:
    A(){
     cout<<"Default constructor called"<<endl;
    }
    A(int a){
    x=a;
    cout<<"parameterized constructor called"<<endl;
    }
    ~A(){
      cout<<"Destructor called "<<x<<endl;
    }
};
int main(){
A a1;
A a2(4);
}


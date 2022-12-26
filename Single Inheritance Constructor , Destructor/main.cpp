                                   //Single Inheritance constructor/Destructor
#include <iostream>
using namespace std;
class A{
public:
    A(){
        cout << "Default constructor of A. "<< endl;
    }
    A(int a){
        cout << "Parameterized constructor of A." << endl;
    }
    ~A(){
        cout << "Destructor of A." << endl;
    }
};
class B : public A{
public:
    B(){
        cout << "Default constructor of B. "<< endl;
    }
    B(int a){                                                              //B(int a) : A(a){
        cout << "Parameterized constructor of B." << endl;
    }
    ~B(){
        cout << "Destructor of B." << endl;
    }
};
int main(){
    B b1;
    //B b1(1);
    cout<<endl;
}

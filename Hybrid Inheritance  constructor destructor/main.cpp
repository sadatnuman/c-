                      //Hybrid Inheritance = Multilevel Inheritanc + Multiple Inheritance 
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
    B(int a){
        cout << "Parameterized constructor of B." << endl;
    }
    ~B(){
        cout << "Destructor of B." << endl;
    }
};
class C : public B{
public:
    C(){
        cout << "Default constructor of C. "<< endl;
    }
    C(int c){                                              // C(int a) : A(a),B(a){
        cout << "Parameterized constructor of C." << endl;
    }
    ~C(){
        cout << "Destructor of C." << endl;
    }
};
class D :  public A , public B , public C{
public:
    D(){
        cout << "Default constructor of D. "<< endl;
    }
    D(int a){
        cout << "Parameterized constructor of D." << endl;
    }
    ~D(){
        cout << "Destructor of D." << endl;
    }
};
int main() {
    C c1;
    D d1;
    cout << endl;
    return 0;
}


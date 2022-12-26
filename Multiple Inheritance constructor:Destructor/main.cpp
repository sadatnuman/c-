                           //Multiple Inheritance constructor/Destructor
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
class B{
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
class C : public A , public B{
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
int main() {
    C c1;
    //C c1(1);
    cout << endl;
    return 0;
}

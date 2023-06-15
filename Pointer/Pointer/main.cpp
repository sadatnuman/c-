#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *b = &a;
    
    cout<<"Address of a : "<< &a <<endl;                                 //0x16fdff1b8
    cout<<"Address of the variable stored inside pointer : "<< b <<endl; //0x16fdff1b8
    
    cout<<"Address of pointer : "<< &b <<endl;                           //0x16fdff1b0
    cout<<"Value of the variable stored inside pointer : "<< *b <<endl;  //5
    return 0;
}

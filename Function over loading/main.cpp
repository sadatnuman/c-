#include<iostream>
using namespace std;

void x(){
    cout<<"Parameterless function"<<endl;
}

void x(int a){
    cout<<"Function with one parameter "<<endl;
}

void x(int a , int b){
    cout<<"Function with two parameters"<<endl;
}

void x(float a , int b){
    cout<<"function with two parameters and fist parameter float. "<<endl;
}
int mian (){
    x();
    x(6);
    x(4,5);
    x(3.5,6);
    
}

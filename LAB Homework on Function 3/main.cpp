#include<iostream>
using namespace std;

void value (float a , float b){
    
    int sum = a + b;
    cout<<"Result : "<< sum <<endl;
}

void reference (float *a , float *b){
    *a = *a + *b;
    cout<<"Reference : "<< *a <<endl;
}
int main(){
    
    float x , y;
    cout<<"Enter two number : "<<endl;
    cin >> x >> y;
    cout<<"\tCall by value :"<<endl;
    value( x , y);
    cout<<"\tCall by reference :"<<endl;
    reference (&x , &y);
    cout<<endl;
    
}

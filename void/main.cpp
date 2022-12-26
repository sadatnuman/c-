#include<iostream>
using namespace std;


void sum(float a ,float b){

   float result = a+b;
   cout<<"sum = "<<result<<endl;
}
void sub(float a ,float b){

   float result = a-b;
   cout<<"sub = "<<result<<endl;
}
void mul(float a ,float b){

   float result = a*b;
   cout<<"mul = "<<result<<endl;
}
void div(float a ,float b){

   float result = a/b;
   cout<<"div = "<<result<<endl;
}
int main(){
    float a , b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    sum(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);

   cout<<endl;
   cout<<endl;
   cout<<endl;
}


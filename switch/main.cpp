#include<iostream>
using namespace std;
int main(){
 double num1, num2;
 cout<<"Enter two numbers: ";
 cin>>num1>>num2;
 char op;
 cout<<"Enter the operator: ";
 cin>>op;
 double result;
 switch(op){
     case '@' :
         result=num1+num2;
         cout<<"Sum of two numbers is: "<<result<<endl;
         break;
     case '#' :
         result=num1-num2;
         cout<<"Sub of two numbers is: "<<result<<endl;
         break;
     case '&' :
         result=num1*num2;
         cout<<"Mult of two numbers is: "<<result<<endl;
         break;
     case '$' :
         result=num1/num2;
         cout<<"Div of two numbers is: "<<result<<endl;
         break;
     default:
         cout<<"Invalid Operator!"<<endl;
 }
 return 0;
}

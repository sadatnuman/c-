#include<iostream>
using namespace std;
int main(){
 int number1, number2;
 cout<<"Enter two numbers: ";
 cin>>number1>>number2;
 int minimum, GCD=1;
 if(number1<number2){
     minimum=number1;
 }
 else{
     minimum=number2;
 }
 for(int i=2; i<=minimum; i++){
     if(number1%i==0 && number2%i==0){
         GCD=i;
     }
 }
 cout<<"Greatest Common Divisors of "<<number1<<" and "<<number2<<" is:"<<GCD<<endl;
}

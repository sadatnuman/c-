#include<iostream>
using namespace std;
int main(){
 int first=0;
 int second=1;
 int fibo;
 int number;
 cout<<"How many Fibonacci numbers do you want to print?";
 cin>>number;
 cout<<endl;
 int element;
 cout<<"Enter a number to search in the series: ";
 cin>>element;
 int flag=0;
 cout<<"First "<<number<<" Fibonacci numbers are: ";
 for(int i=0; i<number; i++){
 cout<<first<<" ";
 fibo=first+second;
 first=second;
 second=fibo;
 if(first==element){
 flag=1;
 }
 }
 cout<<endl;
 
 if(flag==1){
 cout<<element<<" is present in the series"<<endl;
 }
 else{
 cout<<element<<" is not present in the series"<<endl;
 }
 return 0;
}

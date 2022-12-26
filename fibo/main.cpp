#include<iostream>
using namespace std;
int main(){
   int first = 0 , second = 1 , fibo;
   int number;
   cout<<"How many Fibonacci numbers do you want to print: ";
   cin>>number;
   cout<<endl;
   cout<<"First "<<number<<" Fibonacci numbers are: ";
   for(int i=0; i<number; i++){
       cout<<first<<" ";
       fibo=first+second;
       first=second;
       second=fibo;
   }
    cout<<endl;
    cout<<endl;
    return 0;
}


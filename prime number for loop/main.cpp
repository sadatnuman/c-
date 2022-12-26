#include<iostream>
using namespace std;
int main(){
    int number;
    bool prime=true;
    cout<<"Enter a number: ";
    cin>>number;
    for(int j=2; j<number; j++){
        if(number%j==0){
            prime=false;
        }
    }
    if(prime==false){
        cout<<number<<" is not a prime number"<<endl;
    }
    else{
        cout<<number<<" is a prime number"<<endl;
    }
}

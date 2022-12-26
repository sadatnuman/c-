#include<iostream>
using namespace std;

int Fibonacci(int number){
    
    if((number == 1) || (number == 0)){
        return (number);
    }
    else{
        return (Fibonacci(number - 1) + Fibonacci(number - 2));
    }
}
int main(){
    int number , i = 0;
    cout<<"Number = ";
    cin>>number;
    cout<<endl;
    
    cout<<"First "<< number << " fibonacci numbers are: ";
    while (i < number){
        cout << " "<<Fibonacci(i);
        i++;
    }
    cout<<endl;
    cout<<endl;
    return 0;
}


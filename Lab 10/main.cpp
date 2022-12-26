#include<iostream>
using namespace std;

int main(){
    
    int fact , n;
    cout<<"Enter a number to calculate its factorial: ";
    cin>>n;
    fact = n;
    
    while(n > 1){
        
        n--;
        fact = fact * n;
    }
    
    cout<<"Factorial value: "<<fact<<endl;
    
    return 0;
}

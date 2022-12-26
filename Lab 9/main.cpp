#include<iostream>
using namespace std;

int main(){
    
    int first=0 , second=1 ,count=0 ,fibo , n;
    
    cout<<"Enter range: ";
    cin>>n;
    
    while(count < n){
        
        if(count<=1){
            fibo=count;
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
        }
        cout<<" "<<fibo;
        count++;
    }
    cout<<endl;
    
    int element,i;
    cout<<"Which number: ";
    cin>>element;
    for (int i=0; i <= n; i++)
    {
        if(fibo [i] = element){
            cout<<"found"<<endl;
        }
        else{
            cout<<" not found"<< endl;
        }
        
    }
}

#include<iostream>
using namespace std;
int main (){
    
    int i , sum=0, n ;
    cout<< "Enter the number: "<<endl;
    cin>>n;
    
    for(i=1; i<=n; i++){
        
        cout<<i<<" ";
        
        sum = sum + i;
    }
    
    cout<<endl;
    
    cout<<" Sum : "<<sum<<endl;
    
}

#include<iostream>
using namespace std;

int main(){
    
    float arr[5];
    for(int i=0;i<5;i++){
        
        cout<<"Enter number "<<i+1<<" =";
        cin>>arr[i];
    }
    float max = arr[0];
    for(int i=1; i<5;i++){
        if(max<arr[i])
           max=arr[i];
    }
    cout<<endl;
    cout<<"Maximum number is: "<<max<<endl;
    
    float min=arr[0];
    for(int i=1; i<5; i++){
        if(min>arr[i])
           min=arr[i];
    }
    cout<<endl;
    cout<<"Minimum number is: "<<min<<endl;
    cout<<endl;
    cout<<"\t positive or Negative."<<endl;
    
    cout<<endl;
    if(max>=0){
        cout<<"Positive number "<<max<<endl;
    }
    else{
        cout<<"Negative number "<<min<<endl;
    }
    cout<<endl;
    if(min>=0){
        cout<<"Positive number "<<min<<endl;
    }
    else{
        cout<<"Negative number "<<min<<endl;
    }
    cout<<endl;
    cout<<"\t Even or Odd."<<endl;
    
    cout<<endl;
    if((int)max%2==0){
        cout<<"Even number "<<(int)max<<endl;
    }
    else{
        cout<<"Odd number "<<(int)max<<endl;
    }
    cout<<endl;
    if((int)min%2==0){
        cout<<"Even number "<<(int)min<<endl;
    }
    else{
        cout<<"Odd number "<<(int)min<<endl;
    }
    cout<<endl;
    cout<<"\t Prime number or not"<<endl;
    
    int prime=0;
    
    for(int j = 2; j < (int)max; j++){
        if((int)max%j==0){
            prime=1;
            break;
        }
    }
    cout<<endl;
    if(prime==0){
        cout<<"Prime number "<<max<<endl;
    }
    else{
        cout<<"Not a prime number "<<max<<endl;
    }
    cout<<endl;
    int n=0;
    if(min<=0){
        cout<<"Not a prime number "<<min<<endl;
    }
    else{
        for(int i=2;i<(int)min;i++){
            if((int)min%i==0){
                n=1;
                break;
            }
        cout<<endl;
        }
        if(n==0){
            cout<<"Prime number."<<(int)min<<endl;
        }
        else{
            cout<<"Not a Prime number"<<(int)min<<endl;
        }
    }
    cout<<endl;
    return 0;
}

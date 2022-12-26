#include<iostream>
using namespace std;
void PositiveorNegative (float number){
    if(number >= 0){
        cout<<"This Number is Positive."<<endl;
    }
    else{
        cout<<"This Number is Negative."<<endl;
    }
    cout<<endl;
}
void EvenOrOdd(float number){
    if((int)number % 2 == 0){
        cout <<"This Number is even."<<endl;
    }
    else{
        cout<<"This Number is odd."<<endl;
    }
    cout<<endl;
    PositiveorNegative(number);
    
}
void Maximum (float arr [4]){
    float max = arr[0];
    
    for (int i = 0; i < 4; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Maximum number is : "<<max<<endl;
    cout<<endl;
    EvenOrOdd (max);
}
void Minimum (float arr [4]){
    float min = arr[0];
    for(int i = 0; i < 4; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Minimum number is : "<<min<<endl;
    cout<<endl;
    EvenOrOdd (min);
}
int main(){
    float arr[4];
    for(int i = 0; i < 4; i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"\t Maximum number."<<endl;
    Maximum (arr);
    cout<<endl;
    cout<<"\t Minimum number."<<endl;
    Minimum (arr);
    cout<<endl;
    return 0;
    
}

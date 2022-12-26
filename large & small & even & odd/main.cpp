#include<iostream>
using namespace std;
int main() {
    int num1 , num2 , num3 , min , max;
    cin >> num1 >> num2 >> num3;
    
    if(num1 > num2 && num1 > num3) {
        max = num1;
    } else if(num2 > num1 && num2 > num3) {
        max = num2;
    } else {
        max = num3;
    }
    cout << "The largest number is : "<<max<<endl;
    
    if(num1 < num2 && num1 < num3) {
        min = num1;
    } else if(num2 < num1 && num2 < num3) {
        min = num2;
    } else {
        min = num3;
    }
    cout <<"The smallest number is : "<<min<<endl;
    
    if (max % 2 == 0){
        cout <<" The largest number "<<max<<" is even ."<<endl;
    }
    else{
        cout <<" The largest number "<<max<<" is odd ."<<endl;
    }
    
    if (min % 2 == 0){
        cout <<" The smallest number"<<min<<" is even ."<<endl;
    }
    else{
        cout<<" The smallest number "<<min<<" is odd ."<<endl;
    }
    cout<<endl;
    return 0;
}


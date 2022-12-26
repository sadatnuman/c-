#include<iostream>
using namespace std;
int main() {
    int num1 , num2 , num3 , min , max;
    
    cout << " Enter a integer value for first number : ";
    cin >> num1;
    
    cout << " Enter a integer value for second number : ";
    cin >> num2;
    
    cout <<" Enter a integer value for third number : ";
    cin >> num3;
    cout<<endl;
    
    if(num1 > num2 && num1 > num3) {
        max = num1;
        cout <<" First number is largest : "<< num1 << endl;
    } else if(num2 > num1 && num2 > num3) {
        max = num2;
        cout <<" Second number is largest : "<< num2 << endl;
    } else {
        max = num3;
        cout <<" Third number is largest : "<< num3 << endl;
    }
    
    if(num1 < num2 && num1 < num3) {
        min = num1;
        cout <<" First number is smallest : "<< num1 << endl;
    } else if(num2 < num1 && num2 < num3) {
        min = num2;
        cout <<" Second number is smallest : "<< num2 << endl;
    } else {
        min = num3;
        cout <<" Third number is smallest : "<< num3 << endl;
    }
    cout<<endl;
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

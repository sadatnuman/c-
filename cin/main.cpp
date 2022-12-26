#include<iostream>
using namespace std;

int main()
{
    int num1, num2 ;
    cout<< "Enter 2 number:"<< endl;
    cin>>num1 >>num2;
    
    int sum = num1 + num2;
    int sub = num2 - num1;
    int mul = num1 * num2;
    int div = num2 / num1;
    int rem = num2 % num1;
    
    cout<< "sum is : " << sum <<endl;
    cout<< "sub is : " << sub <<endl;
    cout<< "mul is : " << mul <<endl;
    cout<< "div is : " << div <<endl;
    cout<< "rem is : " << rem <<endl;
    
}




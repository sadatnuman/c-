#include<iostream>
using namespace std;
void Swap (float a, float b){
    cout<<"Befor swap A = "<<a<<" & B = "<<b<<endl;
    cout << endl;
    float c = a;
    a = b;
    b = c;
    cout<<"After swap A = "<<a<<" & B = "<<b<<endl;
}
int main(){
    float x , y;
    cout << "Enter two number : ";
    cin >> x >> y;
    cout << endl;
    Swap(x , y);
}

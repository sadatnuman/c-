#include<iostream>
using namespace std;

int main(){
    int x = 7;
    int y = 17;
    
    int a = x + y;
    int b = x + y - y;
    int c = x % y;
    int d = x / y;
    int e = y /x;
    
    int f = x++;
    int g = x;
    int h = ++x;
    int i = ++y;
    int j = y++;
    int k = y;
    int l = --y;
    int m = y--;
    int n = y;
    
    cout << "x + y    : "<<a<<endl;
    cout << "x + y - y: "<<b<<endl;
    cout << "x % y    : "<<c<<endl;
    cout << "x / y    : "<<d<<endl;
    cout << "y /x     : "<<e<<endl;
    
    
    cout <<"x++ : "<< f << endl;
    cout <<"x   : "<< g << endl;
    cout <<"++x : "<< h << endl;
    cout <<"++y : "<< i << endl;
    cout <<"y++ : "<< j << endl;
    cout <<"y   : "<< k << endl;
    cout <<"--y : "<< l << endl;
    cout <<"y-- : "<< m << endl;
    cout <<"y   : "<< n << endl;
    
}

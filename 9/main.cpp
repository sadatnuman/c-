#include<iostream>
using namespace std;

class Student{
private:
    string address;
    void add(string x){
        address = x;
    }
    
public:
    
    string id;
    void ID (string y){
        id = y;
    }
    void display(){
      
    }
    
};
int main(){
    Student Sam , John;
    Sam.ID("22-48497-3");
 
    Sam.ID("Bashundhora R/a");
    Sam.display();
    
}

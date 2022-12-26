#include<iostream>
using namespace std;
class Student{
private:
    string student_name;
protected:
    string student_id;
public:
    float cgpa;

Student(string name){
    student_name=name;
}

void setinfo(string id, float cg){
    student_id=id;
    cgpa=cg;
}

~Student(){
    cout<<"Student name: "<<student_name<<endl;
    cout<<"Student ID: "<<student_id<<endl;
    cout<<"Student CGPA: "<<cgpa<<endl;
}

};
int main(){
    string x ,y ,z ,z1 ;
    float c ,c1;
    cout<<"Enter 1st student name : ";
    cin>>x;
    cout<<"Enter 1st student id : ";
    cin>>z;
    cout<<"Enter 1st student cgpa : ";
    cin>>c;
    cout<<"Enter 2nd student name : ";
    cin>>y;
    cout<<"Enter 2nd student id : ";
    cin>>z1;
    cout<<"Enter 2nd student cgpa : ";
    cin>>c1;
    Student S1(x);
    S1.setinfo(z,c);
    
    Student S2(y);
    S2.setinfo(z1,c1);
    
    /**Student S1("ABC");
     S1.setinfo("22-23",3.45);
     
     Student S2("DEF");
     S2.setinfo("34-1",2.30);**/
    
}

#include<iostream>
#include<stdio.h>
using namespace std;
class Student {
private:
    string student_name;
    string student_ID;
public:
    float cgpa;
void SetStudentInformation () {
    cout<<"Enter student name: ";
    cin>>student_name;
    cout<<"Enter student id: ";
    cin>>student_ID;
    cout<<"Enter student CGPA: ";
    cin>>cgpa;
}
void PrintInfo (){
    cout<<"Student name: "<<student_name<<endl;
    cout<<"Student ID: "<<student_ID<<endl;
    cout<<"student cgpa: "<<cgpa<<endl;
}
};
int main(){
    Student S1;
    S1.SetStudentInformation();
    S1.PrintInfo();
    Student S2;
    S2.SetStudentInformation();
    S2.PrintInfo();
}


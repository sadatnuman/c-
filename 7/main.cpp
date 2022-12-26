#include<iostream>
using namespace std;
class Student{
protected:
    string Name;
    string ID;
    string Department;
    string Address;
    string Semester;
    string Waiver;
    string Scholarship;
    int Credits;
    int Age;
    double tuition_fee;
public:
    float CGPA;
    void setinfo(string a ,string b ,string c ,string d , string e,int f, int g ,float h){
        Name = a;
        ID = b;
        Department = c;
        Address = d;
        Semester = e;
        Credits = f;
        Age = g;
        CGPA = h;
    }
    void display(){
        cout <<"Name : "<<Name<<endl;
        cout <<"Age : "<<Age<<endl;
        cout <<"Address : "<<Address<<endl;
        cout <<"ID : "<<ID<<endl;
        cout <<"Department : "<<Department<<endl;
        cout <<"Semester : "<<Semester<<endl;
        cout <<"Credits :  "<<Credits<<endl;
        cout <<"CGPA : "<<CGPA<<endl;
    }
    void Tuition_Fee(int Credits){
        tuition_fee = Credits * 5500;
        cout<<"Main Tuition fee : "<<tuition_fee<<endl;
    }
};
class Scholarship : public Student{
public:
    Scholarship(){
        cout<<"Congratulations !!! You have got 50% reduction on the tuition fee for scholarship."<<endl;
        cout<<"Now your Tuition fee : "<<tuition_fee - tuition_fee * 0.5<<endl;
    }
};
class Waiver : public Student{
public:
    Waiver(){
        cout<<"Congratulations !!! You have got 25% reduction on the tuition fee for Waiver."<<endl;
        cout<<"Now your Tuition fee : "<<tuition_fee - tuition_fee * 0.25 <<endl;
    }
};
int main(){
    Student A;
    A.setinfo("MD. Nazmus Sadat Numan", "22-48497-3", "CSE", "Bashundhara R/A", "1st", 15, 19, 3.85);
    A.display();
    A.Tuition_Fee(15);
    cout<<endl;
    Scholarship a;
}

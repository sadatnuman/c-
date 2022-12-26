#include <iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    void set_person_info( string nm , int ag){
        name = nm;
        age = ag;
    }
    void print_person_info(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class Student : public Person{
protected:
    string ID;
public:
    void set_student_info(string id){
        ID = id;
    }
    void print_student_info(){
        cout<<"ID : "<<ID<<endl;
    }
};
int main(){
    Student s1;
    s1 . set_person_info("MD. Nazmus Sadat Numan.", 19);
    s1 . set_student_info("22-48497-3");
    s1 . print_person_info();
    s1 . print_student_info();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
}

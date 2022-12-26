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
class Student {
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
class Teacher : public Person , public Student{
private:
    string Name;
public:
    void set_teacher_info(string nm){
        Name = nm;
    }
    void print_teacher_info(){
        cout<<"Favourite Teacher name : "<<Name<<endl;
    }
};
int main() {
    Teacher t1;
    t1 . set_person_info("MD. Nazmus Sadat Numan.", 19);
    t1 . set_student_info("22-48497-3");
    t1 . set_teacher_info("Nazia Alfaz.");
    t1 . print_person_info();
    t1 . print_student_info();
    t1 . print_teacher_info();
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

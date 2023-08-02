//Part B
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string id;
    double gpa;
    Student* next;

    Student(const string name, const string id, double gpa): name(name), id(id), gpa(gpa), next(nullptr) {}
};

class StudentLinkedList {
private:
    Student* head;
public:
    StudentLinkedList() : head(nullptr) {}

    ~StudentLinkedList() {
        while (head) {
            Student* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void addStudent(const string name, const string id, double gpa) {
        Student* newStudent = new Student(name, id, gpa);
        if (!head) {
            head = newStudent;
        } else {
            Student* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
    }
    void removeStudent(const string id) {
        if (!head) {
            return;
        }

        if (head->id == id) {
            Student* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Student* prev = head;
        Student* curr = head->next;

        while (curr) {
            if (curr->id == id) {
                prev->next = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }
    void searchStudent(const string id) {
        Student* temp = head;
        while (temp) {
            if (temp->id == id) {
                cout << "Student Details:" << endl;
                cout << "Name: " << temp->name << endl;
                cout << "ID: " << temp->id << endl;
                cout << "GPA: " << temp->gpa << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Student with ID '" << id << "' not found." << endl;
    }
    void displayAllStudents() {
        Student* temp = head;
        cout << "All Students' Details:" << endl;
        while (temp) {
            cout << "Name: " << temp->name << endl;
            cout << "ID: " << temp->id << endl;
            cout << "GPA: " << temp->gpa << endl;
            temp = temp->next;
        }
    }
};

int main() {
    StudentLinkedList studentList;

    studentList.addStudent("Christopher Nolan", "1", 4);
    studentList.addStudent("Cillian Murphy", "2", 3.5);
    studentList.addStudent("Robert Downey Jr.", "3", 3.9);
   

    studentList.displayAllStudents();
    cout<<"\n\n";

    studentList.searchStudent("3");

    studentList.removeStudent("2");
    cout<<"\n\n";

    studentList.displayAllStudents();
    cout<<"\n\n\n";

    return 0;
}

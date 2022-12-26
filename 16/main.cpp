#include<iostream>
using namespace std;
class Student{
private:
    string StudentName;
    string StudentID;
    float CGPA;
    string UpcomingSemester;
public:
    static int UpcomingSemesterCredits;
    static double CreditFee;
    float percent;
    Student(){}
    Student(string a , string b , float e , string c , int d ,double f,float g){
        StudentName = a;
        StudentID = b;
        UpcomingSemester = c;
        CGPA = e;
        UpcomingSemesterCredits = d;
        CreditFee = f;
        percent=g;
    }
    void DisplayStudent(){
        cout<<"Student Name : "<<StudentName<<endl;
        cout<<"Student ID : "<<StudentID<<endl;
        cout<<"CGPA : "<<CGPA<<endl;
        cout<<"Up coming Semester : "<<UpcomingSemester<<endl;
        cout<<"Up coming Semester Credits : "<<UpcomingSemesterCredits<<endl;
        cout<<"Credit Fee : "<<CreditFee<<endl;
        cout<<endl;
    }
};
class ScholarshipStudents : virtual public Student{
private:
    float ScholarshipPercent = 50;
public:
    ScholarshipStudents(){
    }
    ScholarshipStudents(float a){
        ScholarshipPercent = a;
    }
    double TutionFee(){
        double tutionfee = CreditFee * UpcomingSemesterCredits;
        double Tutionfee = tutionfee  - ( tutionfee * ScholarshipPercent/100);
        return Tutionfee;
    }
    void DisplayScholarshipStudents(){
        cout<<"Scholarship student Percent : "<<ScholarshipPercent<<"%"<<endl;
        cout<<"Tution Fee with scholarship : "<<TutionFee()<<endl;
    }
};
class WaiverStudents : virtual public Student{
private:
    float WaiverPercent = 30;
public:
    WaiverStudents(){}
    WaiverStudents(float a){
        WaiverPercent = a;
    }
    double WaiverTutionFee(){
        double w = CreditFee * UpcomingSemesterCredits;
        double W = w - ( w * WaiverPercent/100);
        return W;
    }
    void DisplayWaiverStudents(){
        cout<<"Waiver Students Percent : "<<WaiverPercent<<"%"<<endl;
        cout<<"Tution Fee for Waiver Students : "<<WaiverTutionFee()<<endl;
    }
};
class QuotaStudents : virtual public Student{
private:
    float DiscountPercent = 60;
public:
    QuotaStudents(){}
    QuotaStudents(float a){
        DiscountPercent = a;
    }
    double DiscountedTutionFee(){
        double d = CreditFee * UpcomingSemesterCredits;
        double D = d - ( d * DiscountPercent/100);
        return D;
    }
    void DisplayQuotaStudent(){
        cout<<"Quota Student Percent : "<<DiscountPercent<<"%"<<endl;
        cout<<"Tution Fee for Quota Student : "<<DiscountedTutionFee()<<endl;
    }
};
int Student :: UpcomingSemesterCredits = 15;
double Student :: CreditFee = 5500;
class SpecialStudents : public WaiverStudents , public QuotaStudents{
public:
    float  spercent = 30+60;
    SpecialStudents(){}
    SpecialStudents (float a){
        spercent = a;
    }
    double tutionfee(){
        double t = CreditFee * UpcomingSemesterCredits;
        double T = t - ( t * spercent/100);
        return T;
    }
    void DisSpecialStudents(){
        cout<<" SpecialStudents Percent : "<<spercent<<"%"<<endl;
        cout<<"Tution Fee for SpecialStudents : "<<tutionfee()<<endl;
    }
};
int main(){
    Student s("sadat","22-48497-3",3.95,"2nd",15,5500,30);
    s.DisplayStudent();
    WaiverStudents w;
    w.DisplayWaiverStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Student doad("doad","22-48498-3",3.95,"2nd",15,5500,50);
    doad.DisplayStudent();
    ScholarshipStudents v;
    v.DisplayScholarshipStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Student jannat("jannat","22-48499-3",3.95,"2nd",15,5500,60);
    jannat.DisplayStudent();
    QuotaStudents q;
    q.DisplayQuotaStudent();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Student hasib("hasib","22-48500-3",3.95,"2nd",15,5500,90);
    hasib.DisplayStudent();
    SpecialStudents r;
    r.DisSpecialStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
}



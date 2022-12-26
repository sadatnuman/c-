#include<iostream>
using namespace std;
class Student{
private:
    string StudentName;
    string StudentID;
    float CGPA;
    string UpcomingSemester;
public:
    int UpcomingSemesterCredits;
    double CreditFee;
    float percent;
    Student(){}
    Student(string a , string b , float c , string d , int e ,double f){
        StudentName = a;
        StudentID = b;
        UpcomingSemester = d;
        CGPA = c;
        UpcomingSemesterCredits = e;
        CreditFee = f;
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
class ScholarshipStudents : public Student{
private:
    float ScholarshipPercent;
public:
    //ScholarshipStudents(){}
    ScholarshipStudents(string a , string b , float c , string d , int e ,double f,float x ,float y, float z) : Student(a,b,c,d,e,f){
        ScholarshipPercent = x;
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
    float WaiverPercent;
public:
    WaiverStudents(){}
    WaiverStudents(string a , string b , float c , string d , int e ,double f,float x ,float y, float z) : Student(a,b,c,d,e,f){
        WaiverPercent = y;
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
    float DiscountPercent;
public:
    QuotaStudents(){}
    QuotaStudents(string a , string b , float c , string d , int e ,double f,float x ,float y, float z) : Student(a,b,c,d,e,f){
        DiscountPercent = z;
    }
    double DiscountedTutionFee(){
        double d = CreditFee * UpcomingSemesterCredits;
        double D = d - ( d * DiscountPercent/100);
        return D;
    }
    void DisplayQuotaStudents(){
        cout<<"Quota Student Percent : "<<DiscountPercent<<"%"<<endl;
        cout<<"Tution Fee for Quota Student : "<<DiscountedTutionFee()<<endl;
    }
};
class SpecialStudents : public WaiverStudents , public QuotaStudents{
public:
    float  spercent ;
    SpecialStudents(){}
    SpecialStudents (string a , string b , float c , string d , int e ,double f,float x ,float y, float z) : Student(a,b,c,d,e,f){
        spercent = y+z;
    }
    double tutionfee(){
        double t = CreditFee * UpcomingSemesterCredits;
        double T = t - ( t * spercent/100);
        return T;
    }
    void DisplaySpecialStudents(){
        cout<<"SpecialStudents Percent : "<<spercent<<"%"<<endl;
        cout<<"Tution Fee for Special Students : "<<tutionfee()<<endl;
    }
};
int main(){
    ScholarshipStudents H("Hasib","22-48000",3.95,"2nd",15,5500,50,30,60);
    H.DisplayStudent();
    H.DisplayScholarshipStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    WaiverStudents S("Sadat","22-48497-3",3.90,"2nd",15,5500,50,30,60);
    S.DisplayStudent();
    S.DisplayWaiverStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    QuotaStudents Q("jannat","22-48001",3.80,"2nd",15,5500,50,30,60);
    Q.DisplayStudent();
    Q.DisplayQuotaStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
    SpecialStudents D("Doad","22-48002",3.90,"2nd",15,5500,50,30,60);
    D.DisplayStudent();
    D.DisplaySpecialStudents();
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

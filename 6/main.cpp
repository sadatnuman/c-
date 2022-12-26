#include<iostream>
using namespace std;
class Patient{
protected:
    string Patient_Name;
    string Patient_ID;
    string pcr;
    float charge = 1500;
public:
    Patient(string pcr)
    {
        if(pcr=="positive"){
            cout<<"Patient is covid Positive."<<endl;
        }
        else{
            cout<<"patient is covid Negative."<<endl;
        }
    }
    void set_info(string a, string b, string c, float d){
        Patient_Name = a;
        Patient_ID = b;
        pcr = c;
        charge = d;
    }
    void get_info()
    {
        cout<<"Name : "<<Patient_Name<<endl;
        cout<<"ID : "<<Patient_ID<<endl;
        cout<<"PCR : "<<pcr<<endl;
    }
};
class CovidPatient : public Patient{
public:
    CovidPatient (string pcr) : Patient(pcr){
        if(pcr=="positive"){
            charge = charge - charge * 0.15;
            cout<<"Now You have to pay : "<<charge <<endl;
        }
        else{
            cout<<"You have to pay : "<<charge<<endl;
        }
    }
};
class NormalPatient : public CovidPatient{
public:

    NormalPatient(string pcr) : CovidPatient(pcr)
    {
        if(pcr=="positive"){
            cout<<"You will receive a 15% discount."<<endl;
        }
        else{
            cout<<"No discount."<<endl;
        }
    }
};
int main(){
    NormalPatient A("positive");
    A.set_info("MD. Nazmus Sadat Numan.","22-48497-3","Positive",1500);
    A.get_info();
    cout<<endl;
    NormalPatient B("negative");
    B.set_info("Sadat Numan.","22-484970-3","Negative",1500);
    B.get_info();
}

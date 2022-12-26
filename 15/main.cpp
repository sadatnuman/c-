#include<iostream>
using namespace std;
class Mobile{
private:
    string Mobile_Owner_Name ;
    string Mobile_Number;
    string Mobile_OS_Name;
    string Lock_Status;
    double Previous_Balance;
    double Mobile_Balance;
public:
    Mobile(){
        cout<<"There is no information of mobile."<<endl;
    }
    Mobile(string a , string b , string d , double c){
        Mobile_Owner_Name=a;
        Mobile_Number=b;
        Mobile_OS_Name=d;
        Previous_Balance = c;
    }
    void setLock_status(bool i){
        if(i==true){
            Lock_Status="locked";
        }
        else{
            Lock_Status="unlocked";
        }
    }
    void ShowInfo(){
        cout<<"Mobile owner name                       : "<<Mobile_Owner_Name<<endl;
        cout<<"Mobile number                           : "<<Mobile_Number<<endl;
        cout<<"Mobile OS name                          : "<<Mobile_OS_Name<<endl;
        cout<<"Lock Statuse                            : "<<Lock_Status<<endl;
        cout<<"Previous Balance                        : "<<Previous_Balance<<endl;
    }
    void Recharge (float recharge ){
        Mobile_Balance=Previous_Balance+recharge;
        cout<<"Recharge                                : "<<recharge<<endl;
        cout<<"After Recharge New Mobile Balance       : "<<Mobile_Balance<<endl;
    }
    void CallSomeone (float timeduration){
        double y=timeduration*0.5;
        double After_call_Mobile_Balance=Mobile_Balance-y;
        cout<<"Call Time                               : "<<timeduration<<" Minutes"<<endl;
        cout<<"After Call Now Main Mobile Balance Left : "<<After_call_Mobile_Balance<<endl;
    }
    ~Mobile(){
        cout<<"This is the information of mobile."<<endl;

    }
    
};
int main(){
    Mobile a1("MD.Nazmus Sadat Numan","01645489811","Android",100);
    a1.setLock_status(false);
    a1.ShowInfo();
    a1.Recharge(50);
    a1.CallSomeone(10);
}



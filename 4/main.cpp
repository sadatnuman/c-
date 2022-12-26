#include<iostream>
using namespace std;
class ParentSalaryAccount{
protected:
    double SalaryBalance = 205000;
public:
    string Name;
    string Occupation;
    string Salary_Account_Number = "101.23a.4b";
    char PhoneNumber[12];
    void Get_Parent_Salary_Account_info(string a,string b, char d[12]){
        for( int i = 0; i>12 ; i++){
            PhoneNumber[i]=d[i];
        }
        Name = a;
        Occupation = b;
    }
    void PrintSalaryinfo(){
        cout<<"Name : "<<Name<<endl;
        cout<<"Occupation : "<<Occupation<<endl;
        cout<<"Phone Number : "<<PhoneNumber<<endl;
        cout<<"Salary Account Number : "<<Salary_Account_Number<<endl;
        cout<<"Salay Balance : "<<SalaryBalance<<endl;
    }
    ParentSalaryAccount(){
    }
    double TaxReturnSalary(){
            SalaryBalance = SalaryBalance - SalaryBalance * 0.0005;
        return SalaryBalance;
        }
    ~ParentSalaryAccount(){
        SalaryBalance = TaxReturnSalary();
        cout<<"Updated Salary Balance : "<<SalaryBalance<<endl;
    }
};
class ParentSavingAccount : public ParentSalaryAccount{
protected:
    double SavingBalance = 60200;
public:
    string NameOfHolder;
    string JobTitle;
    string Telephone;
    char Saving_Account_Number[15] = "201.AB.11G";
    ParentSavingAccount(){
    }
    void Get_Parent_Saving_Account_info(string b, string c, string d){
        
        NameOfHolder = b;
        JobTitle = c;
        Telephone = d;
    }
    void PrintSavinginfo(){
        cout<<"Saving Balance : "<<SavingBalance<<endl;
        cout<<"Name Of Holder : "<<NameOfHolder<<endl;
        cout<<"Job Title : "<<JobTitle<<endl;
        cout<<"Telephone : "<<Telephone<<endl;
        cout<<"Saving Account Number : "<<Saving_Account_Number<<endl;
    }
    double TaxReturnSaving(){
        double Amount = SavingBalance * 0.0003;
        SavingBalance = SavingBalance - Amount;
        return SavingBalance;
    }
    void ReceivedMoneyFromSalary(){
        cout<<"Received Money From Salary Account : "<<(TaxReturnSalary()*0.2)<<endl;
        cout<<endl;
        SavingBalance = TaxReturnSaving() + (TaxReturnSalary()*0.2);
        SalaryBalance = SalaryBalance - (TaxReturnSalary()*0.2);
    }
    double Return_Salary(){
        return TaxReturnSaving() +(TaxReturnSalary()*0.2);
    }
    ~ParentSavingAccount(){
        cout<<"Updated Saving Balance : "<<Return_Salary()<<endl;
    }
};
class ChildAccount : private ParentSavingAccount{
public:
    double ChildBalance = 10200;
    string AccountName ;
    string Title = "Student";
    string Mobile;
    string AccountNumber = "505.ART.62";
    ChildAccount(){
    }
    void Get_Child_Account_info(string a , string b){
        AccountName = a;
        Mobile = b;
    }
    void PrintChildinfo(){
        cout<<"Child Balance : "<<ChildBalance<<endl;
        cout<<"Account Name : "<<AccountName<<endl;
        cout<<"Title : "<<Title<<endl;
        cout<<"Mobile : "<<Mobile<<endl;
        cout<<"AccountNumber : "<<AccountNumber<<endl;
    }
    double TaxReturnOfChild(){
        double amount = ChildBalance*0.00016;
        ChildBalance = ChildBalance - amount;
        return ChildBalance;
    }
    void ReceivedAmountFromSaving(){
        cout<<"Received money from saving account : "<<(Return_Salary()*0.10)<<endl;
        cout<<endl;
        ChildBalance = TaxReturnOfChild()+(TaxReturnSalary()*0.10);
        SavingBalance = SavingBalance - SavingBalance*0.1;
    }
    ~ChildAccount(){
        cout<<"Updated child Balance : "<<ChildBalance<<endl;
    }
};
int main(){
    ParentSalaryAccount sal;
    sal.Get_Parent_Salary_Account_info("Md. Nazmus Sadat Numan.", "Engineer", "64548");
    sal.PrintSalaryinfo();
    ParentSavingAccount sav;
    sav.Get_Parent_Saving_Account_info("Sadat Numan", "Doctor", "01645489811");
    sav.PrintSavinginfo();
    ChildAccount child;
    child.Get_Child_Account_info("Numan", "755433");
    child.PrintChildinfo();
    child.ReceivedAmountFromSaving();
}

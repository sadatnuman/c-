#include<iostream>
using namespace std;
class Utility
{
private:
    double Electricity_Bill;
    double Gas_Bill;
    double Transportation;
    double food;

protected:
    double HouseRent;
public:
    double Total;

    void Set_Utility_info(double a, double b, double c, double d, double e){
        Electricity_Bill = a;
        Gas_Bill = b;
        Transportation = c;
        food=d;
        HouseRent=e;
    }
    void print_Utility_info(){
        Total=Electricity_Bill + Gas_Bill + Transportation + food + HouseRent;
        cout<<"Electricity Bill : "<<Electricity_Bill<<endl;
        cout<<"Gas Bill : "<<Gas_Bill<<endl;
        cout<<"Transportation Bill : "<<Transportation<<endl;
        cout<<"Food Bill : "<<food<<endl;
        cout<<"House Rent : "<<HouseRent<<endl;
        cout<<"Total Utility Bill : "<<Total<<endl;
    }
    float display_utility(){
       return Total;
    }
};
class ExtraExpense{
public:
    double Shopping;
    double Vacation;
    double Charity;
    double Total_Extra;

    void Set_Info_Extra(double a, double b, double c){
        Shopping = a;
        Vacation = b;
        Charity = c;
    }
    void Print_Info_Extra(){
        Total_Extra=Shopping + Vacation + Charity;
        cout<<"Shopping : "<<Shopping<<endl;
        cout<<"Vacation : "<<Vacation<<endl;
        cout<<"Charity : "<<Charity<<endl;
        cout<<"Total Extra Expense : "<<Total_Extra<<endl;
    }
    float display_extra(){
        return Total_Extra;

    }
};
class Account : public Utility, public ExtraExpense{
protected:
    string Name;
    string Occupation;
    double SalaryBalance;
    char  PhoneNumber[15];
    string Salary_Account_Number;
public:
    void Get_Parent_Salary_Account_info( string a, string b,double c, char d[],string e){
        Name = a;
        Occupation = b;
        SalaryBalance = c;
        for(int i=0 ; i<15 ; i++){
            PhoneNumber[i] =d [i];
        }
        Salary_Account_Number = e;
    }
    void PrintSalaryinfo(){
        cout<<"Name : "<<Name<<endl;
        cout<<"Occupation : "<<Occupation<<endl;
        cout<<"Salary Balance : "<<SalaryBalance<<endl;
        cout<<"Phone number : "<< PhoneNumber<<endl;
        cout<<"Account Number : "<<Salary_Account_Number<<endl;
    }
    Account(){
        
    }
    ~Account(){
          SalaryBalance = SalaryBalance-(display_utility()+display_extra());
        cout<<"The updated balance : "<<SalaryBalance<<endl;
    }
};
int main()
{
    Account A;
    A.Get_Parent_Salary_Account_info("MD. Nazmus Sadat Numan","Engineer",500000,"01645489811","123.ABC");
    A.PrintSalaryinfo();
    cout<<endl;
    A.Set_Utility_info(1000,1000,1000,1000,1000);
    A.print_Utility_info();
    cout<<endl;
    A.Set_Info_Extra(5000,5000,5000);
    A.Print_Info_Extra();
    cout<<endl;
}


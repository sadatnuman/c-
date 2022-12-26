#include<iostream>
using namespace std;
class LibraryTokenReservation{
protected:
    float TokenPrice;
private:
    string FromTime;
    string ToTime;
    int TokenQuantity;
public:
    void SetTokenInfo(string From , string To){
        FromTime = From ;
        ToTime = To;
    }
    LibraryTokenReservation(int a){
        TokenQuantity = a;
    }
    void CalculatePrice(){
        if (FromTime =="9AM" && ToTime == "1PM"){
            TokenPrice = TokenQuantity * 200;
        }
        else if (FromTime == "12PM" && ToTime == "3PM"){
            TokenPrice = TokenQuantity * 300;
        }
        else if (FromTime== "1PM" && ToTime == "5PM"){
            TokenPrice = TokenQuantity * 420;
        }
        else if (FromTime == "3PM" && ToTime == "7PM"){
            TokenPrice = TokenQuantity * 500;
        }
    }
    bool Membership(bool x){
        if(x == true ){
            cout<<"Congratulations , you have 5% discount for membership."<<endl;
            TokenPrice = TokenPrice - TokenPrice * 0.05;
            cout<<"Now your Token Price : "<<TokenPrice <<endl;
        }
        else {
            cout << "your Token Price : "<< TokenPrice << endl;
        }
        return TokenPrice;
    }
    void DisplayTokentInfo(){
        cout<<"From Time : "<<FromTime<<endl;
        cout<<"To Time : "<<ToTime<<endl;
        cout<<"Token Quantity : "<<TokenQuantity<<endl;
    }
};
int main(){
    LibraryTokenReservation sadat(3);
    sadat.SetTokenInfo("3PM", "7PM");
    sadat.DisplayTokentInfo();
    sadat.CalculatePrice();
    sadat.Membership(true);
}

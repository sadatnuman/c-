#include<iostream>
using namespace std;

int main(){

    float taka , kg;
    cout<<"Purchased quantity = ";
    cin>>kg;

    taka = kg*350;
    cout <<"Purchased total amount of = "<<taka<<" TK"<<endl;

    if(taka > 1000){

        cout << "You have a 7% discount."<<endl;
        cout << "You have got "<<(taka*0.07)<<" Taka discount"<<endl;
    }
    else{
        cout<<"Sorry, you didn't get the discount."<<endl;
        cout<<"You have to purchase "<<(1000-taka)<<" taka more to get the discount"<<endl;
        cout<<"You have to purchase "<<(1000.0/350)-kg<<" kg more to get the discount"<<endl;
    }
    cout<<endl;
    return 0;
}


#include<iostream>
using namespace std;
int main(){
    float kg , salary , taka , cost;
    
    cout<<"Your monthly salary= ";
    cin >> salary;
    
    cout<<"The quantity of mangoes he/she had sold in 2021 (kg)= ";
    cin >> kg;
    
    taka = salary * 12;
    cout<<"The annual salary = "<<taka<<endl;
    
    cost = kg*350;
    cout << "Total cost of mangoes that he/she had sold in 2021= "<<cost<<endl;
    
    if(cost > 15000){
        
        cout<<"You have received a 24% bonus."<<endl;
        cout<<"your annual salary with bouns "<<(salary+salary*0.24)<<" taka."<<endl;
    }
    else{
        
        cout<<"Sorry, you didn't get the bonus."<<endl;
        cout<<"You need to sell "<<(15000-cost)<<" taka more to get the bonus."<<endl;
        cout<<"You need to sell "<<(15000.0/350)-kg<<" kg more to get the bonus."<<endl;
        
    }
    cout<<endl;
    return 0;
}

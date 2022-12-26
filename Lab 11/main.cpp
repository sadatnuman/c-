#include<iostream>
using namespace std;

int main(){
    
    int goal1 , goal2, N ;
    float avg1 , avg2;
    
    cout<<"Enter the Football match number: ";
    cin>>N;
    
    cout<<"Enter the number of goals scored by Lionel Messi: ";
    cin>>goal1;
    
    cout<<"Enter the number of goals scored by Neymar da Silva Santos Junior: ";
    cin>>goal2;
    
    cout<<endl;
    avg1 = (float)goal1 / N;
    cout<<"The average goal scored in each match by Lionel Messi: "<< avg1 <<endl;
    
    cout<<endl;
    avg2 = (float)goal2 / N;
    cout<<"The average goal scored in each match by Neymar da Silva Santos Junior: "<< avg2 <<endl;
    
    cout<<endl;
    if(avg1 > avg2){
        cout<<"Lionel Messi is a better player."<<endl;
    }
    else{
        cout<<"Neymar da Silva Santos Junior is a better player."<<endl;
    }
    cout<<endl;
    return 0;
    
}

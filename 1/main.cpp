#include<iostream>
using namespace std;
int main(){
    
    float sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,avg;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5>>sub6>>sub7>>sub8;
    
    avg = (sub1+sub2+sub3+sub4+sub5+sub6+sub7+sub8)/8;
     
    cout<<"The average mark of 8 subjects : "<<avg<<endl;
    cout<<endl;
    
    if(100 >= avg && avg > 84){
        cout<<" Good"<<endl;
    }
    else if(85 > avg && avg > 69){
        cout<<" Average"<<endl;
    }
    else if(70 > avg && avg > 50){
        cout<<" Bad"<<endl;
    }
    else{
        cout<<" F"<<endl;
    }
    
}

#include<iostream>
using namespace std;

void Grade (){
    float mark;
    cout<<"Enter your mark : ";
    cin>>mark;
    cout<<endl;
    
    if(91 <= mark && mark <= 100){
        cout <<" Gread = AA"<<endl;
    }
    else if(81 <= mark && mark <= 90){
        cout <<" Gread = AB"<<endl;
    }
    else if(71 <= mark && mark <= 80){
        cout <<" Gread = BB"<<endl;
    }
    else if(61 <= mark && mark <= 70){
        cout <<" Gread = BC"<<endl;
    }
    else if(51 <= mark && mark <= 60){
        cout <<" Gread = CD"<<endl;
    }
    else if(41 <= mark && mark <= 50){
        cout <<" Gread = DD"<<endl;
    }
    else if( mark <= 40){
        cout <<" Gread = Fail"<<endl;
    }
    else{
        cout <<" Invalid! "<<endl;
    }
}
int main(){
    Grade();
    cout<<endl;
    return 0;
}

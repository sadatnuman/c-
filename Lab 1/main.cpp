#include<iostream>
using namespace std;

int main(){

    float physics, chemistry , math;

    cout<<"Enter the marks of physics : ";
    cin>> physics;
    cout<<endl;

    cout<<"Enter the marks of chemistry : ";
    cin>> chemistry;
    cout<<endl;

    cout<<"Enter the marks of math : ";
    cin>> math;
    cout<<endl;

    //1(A)******************************************

    cout <<"Physics : "<<physics;

    if (physics >=80 && physics <= 90){

        cout <<" (A+)"<<endl;
    }

    else if (physics >=70 && physics<= 79.99){

        cout<<" (A)"<<endl;
    }

    else if (physics >=60 && physics<= 69.99){

        cout<<" (B+)"<<endl;
    }

    else if (physics >=50 && physics<= 59.99){

        cout<<" (B)"<<endl;
    }

    else if (physics < 50){

        cout<<" (F)"<<endl;
    }

    else {

        cout<<"Invalid!"<<endl;
    }

    cout<<endl;

    cout<<"Chemistry : "<<chemistry;

    if (chemistry>=80 && chemistry <= 90){

        cout <<" (A+)"<<endl;
    }

    else if (chemistry >=70 && chemistry<= 79.99){

        cout<<" (A)"<<endl;
    }

    else if (chemistry >=60 && chemistry<= 69.99){

        cout<<" (B+)"<<endl;
    }

    else if (chemistry >=50 && chemistry<= 59.99){

        cout<<" (B)"<<endl;
    }

    else if (chemistry < 50){

        cout<<" (F)"<<endl;
    }

    else {

        cout<<"Invalid!"<<endl;
    }

    cout<<endl;

    cout<<"Math : "<<math;

    if (math >= 80 && math <= 90){

        cout <<" (A+)"<<endl;
    }

    else if (math >= 70 && math <= 79.99){

        cout<<" (A)"<<endl;
    }

    else if (math >= 60 && math <= 69.99){

        cout<<" (B+)"<<endl;
    }

    else if (math >= 50 && math <= 59.99){

        cout<<" (B)"<<endl;
    }

    else if (math < 50){

        cout<<" (F)"<<endl;
    }

    else {

        cout<<"Invalid!"<<endl;
    }

    cout<<endl;

    //1(B)************************************************

    float avg =( physics + chemistry + math ) / 3 ;

    cout << "The average score and grade of the student : "<< avg;


    if (avg >=80 && avg <= 90){

        cout <<" (A+)"<<endl;
    }

    else if (avg >=70 && avg<= 79.99){

        cout<<" (A)"<<endl;
    }

    else if (avg >=60 && avg<= 69.99){

        cout<<" (B+)"<<endl;
    }

    else if (avg >=50 && avg<= 59.99){

        cout<<" (B)"<<endl;
    }

    else if (avg < 50){

        cout<<" (F)"<<endl;
    }

    else {

        cout<<"Invalid!"<<endl;
    }

    cout<<endl;

    return 0;

}



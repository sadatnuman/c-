#include <iostream>
using namespace std;
class Car{
protected:string name;string color;
    double price;
public:
    void Set_Car_Info(string col){
        color=col;
        double pc;
        cin>>pc;
        price=pc;
    }
    void Print_Car_Info(){
        cout<<"Name of the car: "<<name<<endl;
        cout<<"Color of the car: "<<color<<endl;
        cout<<"price of the car: "<<price<<endl;
    }
    Car(){
        cout<<"Car Shop"<<endl;
    }
    Car(string nm){
        cout<<"Convertible-sports car collection\t"<<name<<"\n";
    }
    ~Car(){}
};
class SportsCar: virtual public Car{
public:
    SportsCar(){
        cout<<"Car type Sports"<<endl;
    }
    ~SportsCar(){
        cout<<"Discounted price of Sports car "<<price-price * 0.15<<endl;
    }
};
class ConvertibleCar: virtual public Car{
public:
    ConvertibleCar(){
        cout<<"Car type Sports"<<endl;
    }
    ~ConvertibleCar(){
        cout<<"Discounted price of Convertible car "<<price - price * 0.08<<endl;
    }
};
class BmW: public SportsCar, public ConvertibleCar{
public:
    BmW(string nm) : ConvertibleCar() , SportsCar() , Car(){
        cout<<"BMW Convertible-sports car "<<nm<<endl;
    }
    ~BmW(){
        cout<<"Discounted price of Convertible-sports BMW car"<<price-price*0.054<<endl;
    }
};
int main(){
    BmW Z4 ("BMW Z4");
    Z4.Set_Car_Info("Deep Blue");
}

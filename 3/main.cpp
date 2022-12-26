#include<iostream>
using namespace std;
class Fruit{
 string FruitName;
 double Price;
public:
 static float fruit_code;
 static int count;
 Fruit(){
 cout<<"Welcome to Fruit Villa"<<endl;
 }
 Fruit(string FN, double pc){
 fruit_code++;
 ++fruit_code;
 count++;
 FruitName=FN;
 Price=pc;
 }
 ~Fruit(){
 cout<<"Number of fruits are: "<<count<<endl;
 count--;
 }
 void print(){
 cout<<"Fruit Code: "<<fruit_code<<"\t\t"<<"FruitName: "<<FruitName<<"\t"<<"Fruit Price:"<<Price<<endl;
 }
};
float Fruit :: fruit_code=3.3;
int Fruit :: count;
int main(){
    Fruit f0, F1("Apple",100.25);
    F1.print();
    Fruit F2("Orange",120.25);
    F2.print();
    Fruit F3("Grape",60.39);
    F3.print();
}

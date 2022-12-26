#include<iostream>
using namespace std;
class CodingCompetitor {
protected:
    string Name;
    string ID;
    int CompletedCode;
    float Penalty;
public:
    CodingCompetitor(){}
    CodingCompetitor(string a , string b , int c , float d){
        Name = a;
        ID = b;
        CompletedCode = c;
        Penalty = d;
    }
    double ScoreOfCompetitor(){
        double C = CompletedCode * 2;
        double c = Penalty * 1.5;
        C = C - c;
        return C;
    }
    void Display(){
        cout<<"Name : "<<Name<<endl;
        cout<<"ID : "<<ID<<endl;
        cout<<"Completed Code : "<<CompletedCode<<endl;
        cout<<"Penalty : "<<Penalty<<endl;
        cout<<"Score Of Competitor : "<<ScoreOfCompetitor()<<endl;
    }
};
class CompetitorX : public CodingCompetitor{
public:
    CompetitorX(string a , string b , int c , float d): CodingCompetitor {a,b,c,d}{
        cout<<"\tCompetitorX"<<endl;
    }
};
class CompetitorY : public CodingCompetitor{
public:
    CompetitorY(string a , string b , int c , float d): CodingCompetitor {a,b,c,d}{
        cout<<"\tCompetitorY"<<endl;
    }
};
class CompetitorZ : public CodingCompetitor{
public:
    CompetitorZ(string a , string b , int c , float d): CodingCompetitor {a,b,c,d}{
        cout<<"\tCompetitorZ"<<endl;
    }
};
int main(){
    CompetitorX a1("MD. Nazmus", "22-3", 3, 2);
    a1.Display();
    cout<<endl;
    cout<<endl;
    CompetitorY b1("Sadat","22-3",5,0);
    b1.Display();
    cout<<endl;
    cout<<endl;
    CompetitorZ c1("Numan","22-3",4,1);
    c1.Display();
    cout<<endl;
    cout<<endl;
}

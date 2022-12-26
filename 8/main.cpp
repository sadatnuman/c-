#include<iostream>
using namespace std;

int main (){
    
    char arr[13]={'A','B','C','D','E','F','G','H','I','J','K','L','M'};
    int r , c;
    
    for(r = 1 ; r <= 7; r++){
        
        c = 1;
        while (c <= 7 - r){
            
            cout<<" ";
            c++;
        }
        c = 0;
        do{
            cout<<""<<arr[c];
            c++;
        }
        while(c < 2 * r-1);
        cout<<endl;
    }
    return 0;
}

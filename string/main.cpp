#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[10] = "ABCD"; //check \0
    char b[10] = "EFGH";
    
    
    //cout<<"strlen  : " << strlen (a)<<endl;       //4
    
    //cout<<"strcat  : " << strcat (a,b)<<endl;     //ABCDEFGH
    //cout<<"strncat : " << strncat (a,b,3)<<endl;  //ABCDEFG
    
    //cout<<"strcpy  : " << strcpy (a,b)<<endl;     //EFGH
    cout<<"strncpy : " << strncpy (a,b,2)<<endl;  //EFCD
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
}

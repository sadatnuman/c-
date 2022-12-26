#include <iostream>
#include<string.h>
using namespace std;

int main(){
    char string[20];
    int i, length;
    int flag = 0;
    
    cout << "Enter a string: ";
    cin >> string;
    
    length = (int) strlen(string);
    
    char ch;
    for (int index = 0 ; index < length/2; index++) {
        ch = string[index];
        string[index] = string[length-1-index];
        string[length-1-index] = ch;
    }
    
    cout <<"Reverse:  " <<string << endl;
    
    
    
    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
        }
    }
    
    if (flag) {
        cout << string << " is not a palindrome" << endl;
    }
    else {
        cout << string<< " is a palindrome" << endl;
        
        return 0;
    }
}

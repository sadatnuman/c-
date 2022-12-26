#include<iostream>
using namespace std;

int main() {
    int i = 0, t = 1, nextTerm = 0, n;


    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Fibonacci Series: " << i << " " << t << " ";
    int arr[n];

    nextTerm = i + t;

    for(int z=2;z<n;z++) {
        cout << nextTerm << " ";
        arr[z-2]=nextTerm;

        i = t;
        t = nextTerm;
        nextTerm = i + t;
    }

    int y,c=0;
    cout<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>y;
    for(int x=0;x<n;x++){
        if(arr[x]==y){
            cout<<y<<" is present in the Fibonacci Series."<<endl;
            c++;
            break;
        }
    }
    if(c==0){
        cout<<y<<" is not present in the Fibonacci Series."<<endl;
    }

        return 0;
    }



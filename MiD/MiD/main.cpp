#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the total number of student scripts(n): ";
    cin >> n;

    int scripts[n];
    
    int x;
    cout << "Enter the current number of checked scripts(x): ";
    cin >> x;

    cout << "Enter marks of "<<x<<" students : " << endl;
    for (int i = 0; i < x; i++) {
        cin >> scripts[i];
    }
    
    
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < x - i - 1; j++) {
            if (scripts[j] > scripts[j + 1]) {
                int temp = scripts[j];
                scripts[j] = scripts[j + 1];
                scripts[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < x; i++) {
        cout << i + 1 << ". ";
        cout<<scripts[i]<<endl;
    }
    cout<<endl;
    
    
    int y;
    cout<<"How many additional checking is done from the remaininh scripts? : ";
    cin>>y;
    int add[y];
    
    
    if(x+y <= n){
        cout << "Enter marks of "<<y<<" students : " << endl;
        for (int i = 0; i < y; i++) {
            cin >> add[i];
        }
        cout<<endl;
        int N = x+y;
        int arr[N];
        for(int i =0 ;i < x; i++){
            arr[i]=scripts[i];
        }
        for(int i =0 ;i < y; i++){
            arr[x+i]= add[i];
        }
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < N; i++) {
            cout << i + 1 << ". ";
            cout<<arr[i]<<endl;
        }
    }
    else{
        cout<<"Sorry"<<endl;
    }
    return 0;
}


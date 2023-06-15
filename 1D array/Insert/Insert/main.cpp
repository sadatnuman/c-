#include <iostream>

using namespace std;

int main()
{
    int arr[10]={2, 3, 5, 6};
    int n = 4;
    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    //insert 7 at last
    cout<<"After insertion operation::last: "<<endl;
    arr[n++] = 7;
    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    //insert 1 at first
    cout<<"After insertion operation::first: "<<endl;
    n++;
    for(int i=n; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = 1;
    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }

     //insert 4 at index 3
    cout<<"After insertion operation::first: "<<endl;
    n++;
    for(int i=n; i>3; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[3] = 4;
    for(int i=0; i<n; i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter total song (Max size 10): ";
    cin>>n;
    cout<<endl;
    
    cout<<"Playlist : ";
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    
    //last one
    n--;
    cout<<"Playlist After deleting the last one : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
    
   //first one
    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Playlist After deleting the first one : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
    
    int a;
    cout<<"Index of song which to delete: ";
    cin>>a;
    
    for(int i = a; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"Playlist After deleting the index "<< a<<" :"<<endl;
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
    
    int b;
    cout<<"Enter the song to search : ";
    cin>>b;
    
    int flag = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==b)
        {
           flag = 1;
        }
    }
    if(flag==1)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }
    cout<<endl;cout<<endl;
    return 0;
}


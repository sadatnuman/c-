//Search a particular number from an array.

#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int search = 8;
    int position = -1;
    
    for(int i=0;i<10;i++){
        if(arr[i] == search){
            position = i;
        }
    }
    
    if(position == -1){
        cout<<"Not Found"<<endl;
    }
    else {
        cout<<"Found at index : "<<position<<endl;
    }
    return 0;
    /*int target =0;
    cout<<"Enter an int to search: ";
    cin>>target;
    int flag = 0;
    for(int i = 0; i<5; i++)
    {
        if(arr[i]==target)
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
    }*/
}

/*
 Input (Declarations and Initializations): int arr[10], int search = 8, int position = -1.

 Process:

 1.Compare the value of item with the element in the index-value 0 of the array.
 2.If, they are equal, the value of position will be the value of the index and exit. Else,go to next index.
 3.Repeat (1) and (2) for all the indexes.

 Output:
 1.Check the value of position.
 If, it is -1, Print item not found in the array.
 Else, Print item found at position.
 */

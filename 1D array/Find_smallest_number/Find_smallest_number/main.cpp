//Find the smallest number from an array.

#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int Small = arr[0];
    int small = 0;
    
    for(int i=0;i<10;i++){
        if(arr[i]<Small){
            small = arr[i];
        }
    }
    cout<<small<<endl;
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr[10], int Small = arr[0] , int small = 0.
 
 Process:
 1.Compare the value of small with the element in the index-value 1 of the array.
 2.Store the smaller number into small.
 3.Increase the value of index by 1.
 4.Repeat (1), (2) and (3) for all the indexes.
 
 Output: Print the value of small.
 */

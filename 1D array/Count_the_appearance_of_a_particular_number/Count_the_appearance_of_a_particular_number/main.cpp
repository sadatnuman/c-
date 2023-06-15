//Count the appearance of a particular number in an array.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,2,6,2,8,2,0};
    int item = 2;
    int count = 0;
    for(int i = 0 ; i < 10 ; i++){
        if(arr[i] == item){
            count++;
        }
    }
    cout<<"Item appeared count times : "<<count<<endl;
    return 0;
}

/*
 Input (Declarations and Initializations): int arr[10], int item, int count = 0.

 Process:

 1.Compare the value of item with the element in the index-value 0 of the array.
 2.If, they are equal, increase the value of count by 1. Else, go to next index.
 3.Repeat (1) and (2) for all the indexes.

 Output: Print item appeared count times.
 */




/*
 Find how many number even and odd number in an array.
 
 int arr[5];
 
 cout<<"Please enter 5 integers : ";
 
 for(int i = 0 ; i < 5 ; i++){
 cin>>arr[i];
 }
 
 int oddcount = 0;
 int evencount = 0;
 
 for(int j = 0 ; j < 5 ; j++){
 if(arr[j] % 2 == 0){
 evencount++;
 }
 else{
 oddcount++;
 }
 }
 
 cout<<"Number of even number : "<<evencount<<endl;
 cout<<"Number of odd number : "<<oddcount<<endl;
 cout<<"\n\n";
 */

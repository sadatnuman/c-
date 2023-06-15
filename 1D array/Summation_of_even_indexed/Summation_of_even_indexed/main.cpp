//Find the summation of even indexed numbers of an array.

#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int sum = 0;
    
    for(int i = 0 ; i< 10; i+=2){
        sum += arr[i];
    }
    cout<<sum<<endl;
    
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr[10], int sum =0.

 Process:

 1.Add the value of sum with the element in the index-value 0 of the array.
 2.Store the summation of the addition of (1) in sum.
 3.Increase the value of the index by 2.
 4.Repeat (1), (2) and (3) for all the indexes.

 Output: Print the value of sum.
 */

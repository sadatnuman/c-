//Find the summation of even numbers of an array.

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int sum = 0;
    
    for(int i=0; i<10 ; i++){
        if(arr[i] % 2 == 0){
            sum += arr[i];
        }
    }
    
    cout<<sum<<endl;
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr[10], int sum = 0.

 Process:

 1.Check, whether the element in index-value 0 is an even number. If yes, go to (2), else, go to (4)
 2.Add the value of sum with the element in that index.
 3.Store the summation of the addition of (2) in sum.
 4.Increase the value of the index by 1.
 5.Repeat (1), (2), (3) and (4) for all the indexes.

 Output: Print the value of sum.
 */

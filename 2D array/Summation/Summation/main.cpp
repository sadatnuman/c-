//Find the summation of the elements of a 2D array.

#include <iostream>
using namespace std;

int main() {
    int arr[3][3]={10,10,10,10,10,10,10,10,10};
    int sum = 0;
    for(int r=0 ; r<3 ; r++){
        for(int c=0 ; c<3 ; c++){
            sum += arr[r][c];
        }
    }
    cout<<sum<<endl;
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr[3][3], int sum = 0;

 Process:
 1.Start from the row with row-value r=0.
 2.Start from the column with column-value c= 0.
 3.Add the value of sum with the element in arr[r][c] index.
 4.Store the summation of the add operation in (3) in sum.
 5.Increase the value of c by 1.
 6.Repeat (3), (4) and (5) for all the columns.
 7.Increase the value of r by 1.
 8.Repeat (2), (3), (4), (5), (6), (7) for all the rows.

 Output: Print the value of sum.
 */

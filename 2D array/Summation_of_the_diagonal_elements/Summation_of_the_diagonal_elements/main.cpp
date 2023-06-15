//Find the summation of the diagonal elements of a 2D array.

#include <iostream>
using namespace std;

int main() {
    int A[4][4]={{10,10,10,10},{10,10,10,10},{10,10,10,10},{10,10,10,10}};
    int sum = 0;
    cout << "A:\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for(int r = 0 ; r<4 ; r++){
        for(int c = 0 ; c<4 ; c++){
            if((r == c)||(r+c)==(r-1)){
                sum += A[r][c];
            }
        }
    }
    
    //or only use this
    
    // Calculate summation of left diagonal elements
     /*for (int i = 0; i < 4; i++) {
         sum += A[i][i];
     }*/
    // Calculate summation of right diagonal elements
    /*for (int i = 0; i < 4; i++) {
        sum += A[i][3-i];
    }*/

    cout<<sum<<endl;
    
    return 0;
    
    /*int A[5][5]={{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10},{10,10,10,10,10}};
    int sum = 0;
    cout << "A:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
    for(int r = 0 ; r<5 ; r++){
        for(int c = 0 ; c<5 ; c++){
            if((r == c)||(r+c)==(r-1)){
                sum += A[r][c];
            }
        }
    }
    cout<<sum<<endl;*/
}

/*
 Input (Declarations and Initializations): int arr[n][n], int sum = 0;

 Process:
 1.Start from the row with row-value r=0.
 2.Start from the column with column-value c= 0.
 3.If the value of r is equal to c or (r+c) is equal to (n-1), go to (4), else go to (6).
 4.Add the value of sum with the element in arr[r][c] index.
 5.Store the summation of add operation in (4) in sum.
 6.Increase the value of c by 1.
 7.Repeat (3), (4), (5) and (6) for all the columns.
 8.Increase the value of r by 1.
 9.Repeat (2), (3), (4), (5), (6), (7) and (8) for all the rows.

 Output: Print the value of sum.
 */

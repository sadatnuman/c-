//Find the Summation of the boundary elements of a 2D array.

#include <iostream>
using namespace std;
int main() {
    int A[4][4]={{10,10,10,10},{10,11,11,10},{10,11,11,10},{10,10,10,10}};
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
            if(((r != 0)&&(r != 4-1)) && ((c != 0)&&(c != 4-1))){
                sum += A[r][c];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr[4][4], int sum = 0;

 Process:
 1.Start from the row with row-value r=0.
 2.Start from the column with column-value c= 0.
 3.If the value of r is 0 and r is (4-1) and c is 0 and c is (4-1), go to (4), else go to (6).
 4.Add the value of sum with the element in arr[r][c] index.
 5.Store the summation of add operation in (4) in sum.
 6.Increase the value of c by 1.
 7.Repeat (3), (4), (5) and (6) for all the columns.
 8.Increase the value of r by 1.
 9.Repeat (2), (3), (4), (5), (6), (7) and (8) for all the rows.

 Output: Print the value of sum.
 */


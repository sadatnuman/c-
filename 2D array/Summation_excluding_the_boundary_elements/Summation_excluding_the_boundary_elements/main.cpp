//Find the Summation excluding the boundary elements of a 2D array.

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
    for(int r = 1 ; r<4-1 ; r++){
        for(int c = 1 ; c<4-1 ; c++){
                sum += A[r][c];
        }
    }
    cout<<sum<<endl;
    return 0;
}

/*Input (Declarations and Initializations): int A[4][4], int sum = 0;
 
 Process:
 1.Start from the row with row-value r=1.
 2.Start from the column with column-value c= 1.
 3.Add the value of sum with the element in arr[r][c] index.
 4.Store the summation of the add operation in (3) in sum.
 5.Increase the value of c by 1.
 6.Repeat (3), (4) and (5) for c-1 the columns.
 7.Increase the value of r by 1.
 8.Repeat (2), (3), (4), (5), (6), (7) for r-1 the rows.
 
 Output: Print the value of sum.
 */

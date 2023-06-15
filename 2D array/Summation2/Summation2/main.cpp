//Find the summation of two 2D arrays and store the result in another 2D array.

#include <iostream>
using namespace std;

int main() {
    int A[3][3]={{10,10,10},{10,10,10},{10,10,10}};
    int B[3][3]={{10,10,10},{10,10,10},{10,10,10}};
    int S[3][3];
    
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "A:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "B:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << B[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Sum of A&B is S:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << S[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*
 Input (Declarations and Initializations): int A[3][3], int B[3][3], int S[3][3];

 Process:
 1.Start from the row with row-value r=0.
 2.Start from the column with column-value c= 0.
 3.Add the value of A[i][j] with B[r][c] and store the summation in S[i][j].
 4.Increase the value of c by 1.
 5.Repeat (3) and (4) for all the columns.
 6.Increase the value of r by 1.
 7.Repeat (2), (3), (4), (5) and (6) for all the rows.

 Output: Print the array S.
 */

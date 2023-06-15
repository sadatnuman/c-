//Find the transpose matrix of a 2D Array.

#include <iostream>
using namespace std;

int main() {
    int A[5][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    int A_Tr[4][5];
    
    for(int r = 0; r<5 ; r++){
        for(int c = 0 ; c<4 ; c++){
            A_Tr[c][r] = A[r][c];
        }
    }
    
    cout << "A_Tr :\n";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << A_Tr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

/*
 Input: (Declarations and Initializations): int A[5][4], int A_Tr[4][5];

 Process:
 1.Start from the row with row-value r=0.
 2.Start from the column with column-value c= 0.
 3.Store the element of A_Tr[c][r] in A[r][c].
 4.Increase the value of c by 1.
 5.Repeat (3) and (4) for all the columns.
 6.Increase the value of r by 1.
 7.Repeat (2), (3), (4), (5) and (6) for all the rows.

 Output: Print the array A_Tr.
 */

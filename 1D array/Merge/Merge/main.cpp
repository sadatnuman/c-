//Merge two arrays into one array.

#include <iostream>
using namespace std;
int main() {
    int arr1[4]={0,1,2,3};
    int arr2[6]={4,5,6,7,8,9};
    int m_array[4+6];
    for(int i = 0; i<4 ; i++){
        m_array[i]=arr1[i];
    }
    for(int i = 0; i<6 ; i++){
        m_array[i+4]=arr2[i];
    }
    for(int i = 0; i<(4+6) ; i++){
        cout<<m_array[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*
 Input: (Declarations and Initializations): int arr1[size1], int arr2[size2], int m_array[size1+size2].

 Process:
 1.Store the elements of arr1 in the 1st size1 indexes of m_array.
 2.Store the elements of arr2 in the m_array starting from index-value size1 of m_array.

 Output: Print the array m_array.
 */

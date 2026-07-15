#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1,4,56,7,5,3,2};
    cout<<"Iterating using for loop:"<<endl;
    for (int i = 0 ; i< sizeof(arr)/sizeof(int); i++) {
        cout << arr[i] << endl;
    }

    cout<<"Iterating using for each:"<<endl;
    for (int element : arr) {
        cout << element << endl;
    }

    int matrix[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<"Iterating the matrix:"<<endl;

    for (int row = 0 ; row < 3 ; row++) {
        for (int col = 0 ; col < 3 ; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}
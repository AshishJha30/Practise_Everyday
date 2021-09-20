#include<iostream>
using namespace std;

int main(){
    int r, c, a[50][50], b[50][50], sum[50][50], i, j;

    cout << "Enter number of rows from 1 to 100: ";
    cin >> r;

    cout << "Enter number of columns from 1 to 100: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // To store elements of 1st matrix
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) {
            cout << "Enter element a " << i + 1 << j + 1 <<" : ";
            cin >> a[i][j]; 
        }
    // To store elements of 2nd matrix
        cout << endl << "Enter elements of 2nd matrix: "<< endl;
        for (i = 0; i < r; i++) 
            for (j = 0; j < c; j++){
                cout << "Enter element b " << i + 1 << j + 1 << " : ";
                cin >> b[i][j];
            }
    // Adding both the given matrix
            for (i = 0; i < r; i++) 
                for (j = 0; j < c; j++) 
                    sum [i][j] = a[i][j] + b[i][j];
                    
                    // Displaying the result of matrix sum
                    cout << endl << "Sum of two matrix is: " << endl;
                    for (i = 0; i < r; i++) 
                        for (j = 0; j < c; j++){
                            cout << sum [i][j] << " ";
                            if (j == c -1) 
                                cout << endl;
                        }
    return 0;
}

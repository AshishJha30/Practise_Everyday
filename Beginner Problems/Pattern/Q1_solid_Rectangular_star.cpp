#include<iostream>
using namespace std;

void solid_Rectangle(int n, int m) {
        int i, j;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <=m; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
int main(){

    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "nEnter the number of columns: ";
    cin >> columns;
    cout << endl;

    solid_Rectangle(rows, columns);
    return 0;
}
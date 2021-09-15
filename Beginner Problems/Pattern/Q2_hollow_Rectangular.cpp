#include<iostream>
using namespace std;

void hollow_Rectangle (int r, int c) {
    
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) { 
            if (i == 1 || i == r || j == 1 || j == c)
            cout << "*";
            else 
            cout << " ";
    }
    cout << endl;
    } 
}

int main(){
    int rows, columns;
    cout << "Enter the number of rows: = ";
    cin >> rows;
    cout << "Enter the number of columns: = ";
    cin >> columns;
    cout << endl;
    hollow_Rectangle(rows, columns);
    return 0;
}
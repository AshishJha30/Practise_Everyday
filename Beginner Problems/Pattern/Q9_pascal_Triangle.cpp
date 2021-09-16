#include<iostream>
using namespace std;

int main(){
    int  i, j, r, space, k = 1;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << endl;

    for (i = 0; i <= r; i++) {
        for (space = 1; space <= r - i; space++)
            cout << "";
            for (j = 0; j <= i; j++) {
                if (j == 0 || i == 0) 
                k = 1;
                else 
                k = k * (i-j+1)/j;
                cout << k << "";
        }
            cout << endl;
            // cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void printPattern(int);

int main(){
    int n, i, j, k = 0;
    cout << "Enter number of lines: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = i; j < n; j++) {
            cout << " ";
        }
        while (k != (2 * i - 1)) {
            if (k == 0 || k == 2 * i-2) {
                cout << "*";
            }
            else {
                cout << "";
                k++;
            }
        k = 0;
        cout << endl;
        }
        for (i = 0; i < 2 * n - 1; i++) {
            cout << "*";
        }
    }

    return 0;
}
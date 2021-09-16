#include<iostream>
using namespace std;

int main(){
    int n, k = 0;
    cout << "Enter the number of lines: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = i; j <= 2 * i - 1; ++j){
            cout << "*";
        }
        for (int j = 0; j < i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
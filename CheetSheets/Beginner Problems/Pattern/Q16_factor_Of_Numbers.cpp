#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are ";
    for (int i = 0; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
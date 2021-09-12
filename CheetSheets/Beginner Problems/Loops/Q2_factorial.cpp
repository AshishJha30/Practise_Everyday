#include<iostream>
using namespace std;

int main(){
    int n;
    int factorial = 1; 

    cout << "Enter the number whose factorial you want: ";
    cin >> n;
    if (n == 0 || n == 1) {
        cout << "Factorial of " << n << " is 1" << endl; 
    }
    else {
        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
            // n - 1;
        }
        cout << "Factorial of " << n << " is " << factorial;
    }
    return 0;
}
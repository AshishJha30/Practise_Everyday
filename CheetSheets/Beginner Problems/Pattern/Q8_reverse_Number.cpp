#include<iostream>
using namespace std;

int main() {
    int n, reversedNumber = 0, remainder;
    cout << "Enter the number you want to reverse: ";
    cin >> n;
    
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber*10 + remainder;
        n = n / 10;
    }
    cout << "Reversed Number = " << reversedNumber;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    float base, exponent, result =1;
    cout << "Enter the base and exponent value respectively: ";
    cin >> base >> exponent;

    cout << base << "^" << exponent;

    while (exponent != 0) {
        result *= base;
        exponent--;
    }
    // result = base**exponent;
    cout << "=" << result; 
    return 0;
}
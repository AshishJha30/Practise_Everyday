#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(long long);

int main(){
    long long n;

    cout << "Enter a binary number: ";
    cin >> n;

    cout << n << " in binary = " << binaryToDecimal(n) << " in decimal.";    
    return 0;
}

int binaryToDecimal (long long n) {
    int decimalNumber = 0, i =0, remainder;
    while(n != 0) {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder * pow(2,i);
        ++i;
    }
    return decimalNumber;
}

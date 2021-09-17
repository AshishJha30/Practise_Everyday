#include<iostream>
#include<cmath>
using namespace std;

long long decimalToBinary(int);

int main(){
    int n, binaryNumber;

    cout << "Enter a decimal Number: ";
    cin >> n;
    binaryNumber = decimalToBinary(n);
    cout << n << " in decimal = " << binaryNumber << " in binary"<< endl;
    return 0;
}

long long decimalToBinary(int n) {
    long long binaryNumber = 0;
    int remainder, i = 1, step =1;

    while (n != 0) {
        remainder = n % 2;
        cout <<"Step "<< step++ << ";"<< n <<"/2, Remainder = "<< remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}
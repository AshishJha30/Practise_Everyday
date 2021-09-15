#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num, originalNumber, remainder, n = 0, result = 0, power;
    cout << "Enter an integer: ";
    cin >> num;

    originalNumber = num;

    while (originalNumber != 0) {
        originalNumber /= 10;
        n++;
    }
    originalNumber = num;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        power = round(pow(remainder, n));
        result += power;
        originalNumber /= 10;
    }

    if (result == num) {
        cout << num << " is an Armstrong number. ";
    }
    else {
        cout << num << " is not an Armstrong number.";
    }
    return 0;
}
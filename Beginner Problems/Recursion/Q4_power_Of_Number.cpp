#include<iostream>
using namespace std;

int powerOfNumber(int, int);

int main(){
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number to raised: ";
    cin >> powerRaised;

    result = powerOfNumber(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}

int powerOfNumber(int base, int powerRaised) {
    if (powerRaised != 0) {
        return (base*powerOfNumber(base, powerRaised-1));
    }
    else{
        return 1;
    }
}

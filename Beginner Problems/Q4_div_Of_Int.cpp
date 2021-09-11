#include<iostream>
using namespace std;

int main(){
    int d1, d2;
    cout << "Enter the dividend and divisor " << endl;
    cin >> d1 >> d2;
    int quotient = d1 / d2 ;
    int remainder = d1 % d2;
    cout << "Quotient: "<< quotient << " and " << "Remainder: " << remainder << endl;
    return 0;
}
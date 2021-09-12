#include<iostream>
using namespace std;

int main(){
    int d1, d2;
    cout << "Enter the dividend " << endl;
    cin >> d1;
    cout << "Enter the divisor " << endl;
    cin >> d2;
    cout << "Dividend: " << d1 << " Divisor: " << d2 <<endl;
    int quotient = d1 / d2 ;
    int remainder = d1 % d2;
    cout << "Quotient: "<< quotient << " and " << "Remainder: " << remainder << endl;
    return 0;
}
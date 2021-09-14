#include<iostream>
using namespace std;

int main(){
    int n1, n2, i;
    bool isPrime = true;
    cout << "Enter the range in which you want a prime number: ";
    cin >> n1 >> n2;

    cout << "Prime numbers between " << n1 << " and " << n2 << " are:" << endl;
    
    while (n1 < n2) {
        isPrime = true;
        if(n1 == 0 || n1 == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= n1/2; ++i) {
                if (n1 % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            cout << n1 << " ";
            ++n1;
        }
    }
        return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cout << "Enter the number till which you want the summation: ";
    cin >> n;

    for (int i =1; i <= n; i++) {

        sum = sum + i;
        // cout << sum << endl;  
    }
    cout << "The of natural number till "<< n << " is " << sum << endl;
    return 0;
}
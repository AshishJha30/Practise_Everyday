#include<iostream>
using namespace std;


int sum(int n);

// int sum = 0;
// int natural_Numbers_Sum(int n) {
//     if (n == 0 || n == 1) {
//         // cout << n;
//         return n;
//     }
//     if (sum < n) {
//         cout << "Sum of natural number till: "<< n;
//         cout << natural_Numbers_Sum(sum);
//         sum += n;
//         return sum;
//     }
// } 

int main(){
    int n;
    cout << "Till what number you want sum of natural numbers: ";
    cin >> n;
    cout <<"Sum of natural number till " << n << " is " << sum(n);
    return 0;
}

int sum(int n) {
    if(n != 0) {
        return n + sum(n - 1);
    }
        return 0;
}
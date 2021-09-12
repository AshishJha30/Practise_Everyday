#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter three numbers that you want to compare: ";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    if (n1 > n2 && n1 > n3) {
        cout << n1 <<" is largest among given three numbers";
    }
    else if (n2 > n1 && n2 > n3) {
        cout << n2 <<" is largest among given three numbers";
    }
    else {
        cout << n3 <<" is largest among given three numbers";
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number whose table you want: ";
    cin >> n;
    
    for (int i =1; i <= 10; i++) {
        cout << n << " X " << i << " = " << n * i <<endl;
    }
    return 0;
}
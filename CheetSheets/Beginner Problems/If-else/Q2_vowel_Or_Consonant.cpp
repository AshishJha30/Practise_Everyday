#include<iostream>
using namespace std;

int main(){
    char n;
    bool isLowerCase, isUpperCase;
    cout << "Enter an alphabet: ";
    cin >> n;

    isLowerCase = (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u');

    isUpperCase = (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U');

    if (!isalpha(n)) {
        cout << n << " is not a alphabet" << endl;
    }
    else if (isLowerCase || isUpperCase) {
        cout << n << " is a vowel" << endl;
    }
    else {
        cout << n << " is a consonant" << endl;
    }

    return 0;
}
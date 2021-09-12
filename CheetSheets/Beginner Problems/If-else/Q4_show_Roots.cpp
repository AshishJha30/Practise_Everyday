#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, x1, x2, determinant, realPart, imaginoryPart;
    cout << "Enter the coffiecient of a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4 * a * c;

    if (determinant > 0) {
        x1 = ((-b + sqrt(determinant)) / (2 * a));
        x2 = ((-b - sqrt(determinant)) / (2 * a));
        cout << "Roots are real and different:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 <<endl;
    }
    if (determinant == 0 ) {
        cout <<"Roots are real and same" << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 = " << x1 <<endl;
    }
    else {
        realPart = -b / (2*a);
        imaginoryPart = sqrt((-determinant) / (2*a));
        cout << "Roots are complex and different" << endl;
        cout << "x1 = " << realPart << "+" << imaginoryPart << "i" <<endl;
        cout << "x2 = " << realPart << "-" << imaginoryPart << "i" <<endl;
    }
    return 0;
}
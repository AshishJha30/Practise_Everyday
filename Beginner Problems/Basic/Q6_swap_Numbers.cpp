#include <iostream>
using namespace std;

int main()
{
    //     int n1, n2, temp;
    //     cin >> n1 >> n2;
    //     temp = n1;
    //     n1 = n2;
    //     n2 = temp;
    //     cout << "After swapping" << endl;
    //     cout << n1 << " " << n2 << endl;
    //     return 0;
    // }

    // Another method (withput using 3rd variable)
    // {
    int n1, n2;
    cout << "Enter the numbers you want to swap " << endl;
    cout << "1st number" << endl;
    cin >> n1;
    cout << "2st number" << endl;
    cin >> n2;
    cout << "Before Swapping n1 =" << n1 << "and n2 =" << n2 << endl;
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    cout << "After swapping" << endl;
    cout << n1 << " " << n2;
    return 0;
}
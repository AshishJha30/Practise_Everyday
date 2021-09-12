#include<iostream>
using namespace std;

int main(){
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
     cin >> n1 >> n2;
     n1 = n1 + n2;
     n2 = n1 - n2;
     n1 = n1 - n2;
     cout << "After swapping" << endl;
     cout << n1 <<" " << n2;
     return 0;
}
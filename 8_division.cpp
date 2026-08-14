#include <iostream>
using namespace std;

int main() {
    // Variable declaration and initialization
    int a = 8, b = 3;
    int add, sub, multi; float div;

    // Arithmetic operations
    add = a + b;
    sub = a - b;
    multi = a * b;
    div = (a*1.0) / (b*1.0);

    // Displaying the results
    cout << "add: " << add << endl
         << "sub: " << sub << endl
         << "multi: " << multi << endl
         << "division: " << div << endl;

    return 0;
}

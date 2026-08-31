#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double theta;

    cout << "Enter the value for theta: ";
    cin >> theta;

    cout << "sinh(" << theta << ") = " << sinh(theta) << endl;
    cout << "cosh(" << theta << ") = " << cosh(theta) << endl;
    cout << "tanh(" << theta << ") = " << tanh(theta) << endl;

    return 0;
}
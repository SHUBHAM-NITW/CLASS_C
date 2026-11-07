#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, sum = 0, fact = 1;
    int n;
    cout << "Enter x and number of terms n: ";
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        if (i > 0) fact = fact * i;
        sum = sum + (pow(x, i) / fact);
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

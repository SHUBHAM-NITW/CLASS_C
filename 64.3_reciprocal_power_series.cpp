#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, sum = 0;
    int n;
    cout << "Enter x and number of terms n: ";
    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        sum = sum + (1.0 / pow(x, i));
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

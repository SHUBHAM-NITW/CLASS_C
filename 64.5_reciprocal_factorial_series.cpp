#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0, fact = 1;
    cout << "Enter number of terms n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i > 0) fact = fact * i;
        sum = sum + (1.0 / fact);
    }

    cout << "Sum: " << sum << endl;
    return 0;
}

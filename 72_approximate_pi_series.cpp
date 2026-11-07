#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms N: ";
    cin >> n;

    double sum = 0;
    for (int k = 0; k <= n; k++) {
        double term = 1.0 / (2 * k + 1);
        if (k % 2 == 0) sum = sum + term;
        else sum = sum - term;
    }

    double pi = 4 * sum;
    cout << setprecision(10) << "Pi: " << pi << endl;
    return 0;
}

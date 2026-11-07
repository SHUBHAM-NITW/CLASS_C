#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fact(int n) {
    double f = 1;
    for (int i = 1; i <= n; i++) f = f * i;
    return f;
}

int main() {
    double sum = 0;
    for (int k = 0; k < 4; k++) {
        double num = fact(4 * k) * (1103 + 26390 * k);
        double den = pow(fact(k), 4) * pow(396, 4 * k);
        sum = sum + (num / den);
    }

    double invPi = (2 * sqrt(2) / 9801) * sum;
    double pi = 1.0 / invPi;

    cout << setprecision(15) << "Pi: " << pi << endl;
    return 0;
}

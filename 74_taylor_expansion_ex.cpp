#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    double x = 2.0;
    int maxTerms = 15;
    double sum = 0, fact = 1;
    double exact = exp(x);

    ofstream file("output.txt");

    for (int n = 0; n < maxTerms; n++) {
        if (n > 0) fact = fact * n;
        sum = sum + (pow(x, n) / fact);
        file << n + 1 << " " << sum << " " << exact << endl;
        cout << "Terms: " << n + 1 << " Series: " << sum << " Exact: " << exact << endl;
    }

    file.close();
    return 0;
}

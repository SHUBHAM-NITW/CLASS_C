#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, z = 0;
    int n;
    cout << "Enter x and N: ";
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        z = z + (i * pow(x, i));
    }

    cout << "Z: " << z << endl;
    return 0;
}

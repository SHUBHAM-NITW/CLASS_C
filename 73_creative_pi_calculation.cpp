#include <iostream>
using namespace std;

int main() {
    int r = 1000;
    long long inside = 0;
    long long total = (long long)r * r;

    for (int x = 0; x < r; x++) {
        for (int y = 0; y < r; y++) {
            if (x * x + y * y <= r * r) {
                inside++;
            }
        }
    }

    double pi = 4.0 * inside / total;
    cout << "Pi: " << pi << endl;
    return 0;
}

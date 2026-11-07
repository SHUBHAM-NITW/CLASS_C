#include <iostream>
using namespace std;

int main() {
    for (int n = 1; n < 2000; n++) {
        int count = 0;
        for (int a = 1; a * a * a < n; a++) {
            for (int b = a + 1; a * a * a + b * b * b <= n; b++) {
                if (a * a * a + b * b * b == n) {
                    count++;
                }
            }
        }
        if (count == 2) {
            cout << "Taxicab number: " << n << endl;
            break;
        }
    }
    return 0;
}

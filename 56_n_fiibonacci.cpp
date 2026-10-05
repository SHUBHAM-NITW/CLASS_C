#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0;
    } else if (n == 2) {
        cout << 1;
    } else {
        int a = 0, b = 1, next;
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        cout << b;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, num, max_val;
    cin >> n;
    cin >> max_val;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num > max_val) {
            max_val = num;
        }
    }
    cout << max_val;
    return 0;
}

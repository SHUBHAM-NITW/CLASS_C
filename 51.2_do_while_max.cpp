#include <iostream>
using namespace std;

int main() {
    int n, num, max_val;
    cin >> n;
    cin >> max_val;
    int i = 1;
    if (n > 1) {
        do {
            cin >> num;
            if (num > max_val) {
                max_val = num;
            }
            i++;
        } while (i < n);
    }
    cout << max_val;
    return 0;
}

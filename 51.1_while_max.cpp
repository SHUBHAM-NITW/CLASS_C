#include <iostream>
using namespace std;

int main() {
    int n, num, max_val;
    cin >> n;
    cin >> max_val;
    int i = 1;
    while (i < n) {
        cin >> num;
        if (num > max_val) {
            max_val = num;
        }
        i++;
    }
    cout << max_val;
    return 0;
}

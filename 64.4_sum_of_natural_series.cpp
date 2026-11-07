#include <iostream>
using namespace std;

int main() {
    int n, totalSum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int termSum = 0;
        for (int j = 1; j <= i; j++) {
            termSum = termSum + j;
        }
        totalSum = totalSum + termSum;
    }

    cout << "Sum: " << totalSum << endl;
    return 0;
}

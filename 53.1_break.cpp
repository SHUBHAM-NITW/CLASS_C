#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 2) {
            continue;
        }
        if (i == 4) {
            break;
        }
        cout << i << " ";
    }
    exit(0);
    return 0;
}

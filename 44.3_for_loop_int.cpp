#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while (i <= 100) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
    
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 100);
    cout << "\n";
    
    for (int k = 1; k <= 100; k++) {
        cout << k << " ";
    }
    return 0;
}

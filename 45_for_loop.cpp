#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }
    cout << "\n";
    
    for (int i = 1; i <= 100; i += 2) {
        cout << "odd: " << i << " ";
    }
    cout << "\n";
    
    for (int i = 2; i <= 100; i += 2) {
        cout << "even: " << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your number: ";
    cin >> n;
    bool is_prime = true;
    if (n <= 1) {
        is_prime = false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = false;
        }
    }
    if (is_prime) {
        cout << "Prime"<<endl;
    } else {
        cout << "Not Prime"<<endl;
    }
    return 0;
}

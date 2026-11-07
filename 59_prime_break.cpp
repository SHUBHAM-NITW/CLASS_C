#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter your number :";
    cin >> n;
    bool is_prime = true;
    if (n <= 1) {
        is_prime = false;
    }
    for (int i = 2; i * i < n/2.0; i++) {// any nummber can't divided by half of the number
        if (n % i == 0) {
            is_prime = false;
            break;//if any moment the is_prime is false don't check for other numbers
        }
    }
    if (is_prime) {
        cout << "Prime"<<endl;
    } else {
        cout << "Not Prime"<<endl;
    }
    return 0;
}

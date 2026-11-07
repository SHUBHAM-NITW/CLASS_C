#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    cout << "Sum: " << add(5, 10) << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

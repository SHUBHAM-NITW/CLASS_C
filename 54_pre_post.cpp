#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = ++a;
    cout << a << " " << b << "\n";
    
    int c = 5;
    int d = c++;
    cout << c << " " << d << "\n";
    
    return 0;
}

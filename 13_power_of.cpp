#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a = 0.99;
    int b = 365;
    float c = 1.01;
    float x = pow(a,b);
    float y = pow(c,b);
    cout << a<<"to the power of "<< b << " is "<< x << endl;
    cout << c << " to the power of "<< b<< " is "<< y << endl;

    return 0;
}
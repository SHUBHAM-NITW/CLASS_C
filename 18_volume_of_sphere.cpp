#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;
    double volume;
    const double PI = 3.14;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Volume of the sphere: " << volume << endl;

    return 0;
}
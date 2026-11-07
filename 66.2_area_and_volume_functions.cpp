#include <iostream>
using namespace std;

double getArea(double r) {
    return 3.14159 * r * r;
}

double getVolume(double r) {
    return (4.0 / 3.0) * 3.14159 * r * r * r;
}

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    cout << "Area of Circle: " << getArea(r) << endl;
    cout << "Volume of Sphere: " << getVolume(r) << endl;
    return 0;
}

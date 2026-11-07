#include <iostream>
using namespace std;

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    double area = 3.14159 * r * r;
    double volume = (4.0 / 3.0) * 3.14159 * r * r * r;

    cout << "Area of Circle: " << area << endl;
    cout << "Volume of Sphere: " << volume << endl;
    return 0;
}

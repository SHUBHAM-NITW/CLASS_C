#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {

    // 12.2.1
    cout << "12.2.1" << endl;
    cout << sqrt(16.0) << ", "
         << sqrt(16) << ", "
         << pow(2.0, 3.0) << endl;

    cout << "\n12.2.2" << endl;
    cout << pow(2, 3) << ", "
         << pow(2.0, 3) << ", "
         << pow(1.1, 2) << endl;

    
    cout << "\n12.2.3" << endl;
    cout << abs(3) << ", "
         << abs(-3) << ", "
         << abs(0) << ", "
         << fabs(-3.0) << ", "
         << fabs(-3.5) << ", "
         << fabs(3.5) << endl;

    
    cout << "\n12.2.4" << endl;
    cout << ceil(5.1) << ", "
         << ceil(5.8) << ", "
         << floor(5.1) << ", "
         << floor(5.8) << endl;

    
    cout << "\n12.2.5" << endl;
    cout << pow(3.0, 2) / 2.0 << ", "
         << pow(3.0, 2) / 2 << endl;

    
    cout << "\n12.2.6" << endl;
    cout << 7 / abs(-2) << ", "
         << (7 + sqrt(4.0)) / 3.0 << ", "
         << sqrt(pow(3, 2)) << endl;

    
    cout << "\n12.2.7" << endl;
    cout << "12*3+17 = " << 12 * 3 + 17 << endl;
    cout << "12*(3+7) = " << 12 * (3 + 7) << endl;

    return 0;
}
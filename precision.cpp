#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 1.78640239743622367236;
    double y = 45.864230617346237562308174655610234675623;
    double  ans = x+y;

    cout << fixed<< setprecision(20)<<ans<<endl;

    return 0;
}

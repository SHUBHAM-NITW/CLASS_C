#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 5, b = 2;
    float c = a / (b*1.0);
   //int / int = int; but one of them id float the the result will be float
    
    cout << c << endl;
    
    cout<< sqrt(4)<<endl;
    cout<< pow(2,3)<<endl;
    cout << abs(-5)<<endl;
    cout << round(6.6)<<endl;
    cout << round(6.4)<<endl;
    cout <<ceil(6.4)<<endl;
    cout<< floor(6.4)<<endl;
    cout <<fabs(-6.4)<<endl;




    return 0;
}



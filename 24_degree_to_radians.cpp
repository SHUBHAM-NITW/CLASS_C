#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float angle, rad;
    cout << "Enter Angle in degree : ";
    cin >> angle;
    rad = angle * 3.1415/180;
    cout << "Sin of "<<angle<<" is "<<sin(rad)<<endl;
    cout << "Cos of "<<angle<<" is "<<cos(rad)<<endl;
    cout << "sinh of "<<angle<<" is "<<sinh(rad)<<endl;
    cout << "cosh of "<<angle<<" is "<<cosh(rad)<<endl;
    
    return 0 ;
}
#include<iostream>
#include <cmath>
using namespace std;

int main(){
    float angle, rad;
    cout << "Enter Angle in degree : ";
    cin >> angle;
    rad = angle * 3.1415/180;
    cout << "Sin of "<<angle<<" is "<<sin(rad)<<endl;
    
    return 0 ;
}
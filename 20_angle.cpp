#include<iostream>
#include<math.h>

using namespace std;

int main(){
double x;
cout<<"Enter the angle in radian : ";
cin>>x;

cout<<"Sine of x = "<<sin(x)<<endl;
cout<<"Cosine of x = "<<cos(x)<<endl;
cout<<"Tangent of x = "<<sin(x)/cos(x)<<endl;
cout<<"Cotangent of x = "<<cos(x)/sin(x)<<endl;
cout<<"Secant of x = "<<1/cos(x)<<endl;
cout<<"Cosecant of x = "<<1/sin(x)<<endl; 

return 0;
}

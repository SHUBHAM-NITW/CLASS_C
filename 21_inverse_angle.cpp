//inverse trignometric functions

#include<iostream>
#include<math.h>

using namespace std;

int main(){
double x;
cout<<"Enter the angle in radians : ";
cin>>x;

cout<<"Arc sine of x = "<<asin(x)<<endl;
cout<<"Arc cosine of x = "<<acos(x)<<endl;
cout<<"Arc tangent of x = "<<atan(x)<<endl;
cout<<"Arc secant of x = "<<acos(1/x)<<endl;
cout<<"Arc cotangent of x = "<<atan(1/x)<<endl;
cout<<"Arc cosecant of x = "<<asin(1/x)<<endl;
return 0;
}

#include<iostream>
#include<cmath>

using namespace std;

float roots1(float a,float  b,float c){
    float x;
    x=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    return x;
}

float roots2(float a,float  b,float c){
    float x;
    x=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    return x;
}

int main(){
float a,b,c;
cout<<"Enter coefficient of x square : ";
cin>>a;
cout<<"Enter coefficient of x : ";
cin>>b;
cout<<"Enter the constant : ";
cin>>c;

float discriminant = pow(b,2)-4*a*c;

if(discriminant<0){
    cout<<"Roots are imaginary";
}
else{
    float x1=roots1(a,b,c);
    float x2=roots2(a,b,c);
    cout<<"The roots are : "<<x1<<" , "<<x2;
}

return 0;
}

#include<iostream>
#include<cmath>

using namespace std;

int main(){
double t,w,h,a;

cout<<"Enter the Temperature in degree celsius : ";
cin>>t;
double t1=273.15+t;
double t2=(t*1.8)+32;
cout<<"Temperature in Farenheit = "<<t2<<endl<<"Temperature in Kelvin = "<<t1<<endl;

cout<<"Enter the weight in Kilograms : ";
cin>>w;
double w1=1000*w;
double w2=1000*w1;
cout<<"Weight in grams = "<<w1<<endl<<"Weigth in milligram = "<<w2<<endl;

cout<<"Enter the height in metres : ";
cin>>h;
double h1=100*h;
double h2=0.001*h;
cout<<"Height in cm = "<<h1<<endl<<"Height in km = "<<h2<<endl;

cout<<"Enter the area in metre square : ";
cin>>a;
double a1 =10000*a;
double a2=a*pow(10,-6);
cout<<"Area in cm square = "<<a1<<endl<<"Area in km square = "<<a2;
return 0;
}

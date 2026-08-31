#include<iostream>

using namespace std;

int main(){
int num1,num2,num3;

cout<<"Enter three numbers ";
cin>>num1>>num2>>num3;

int max=num1;

if(max<num2){
    max=num2;
}
if(max<num3){
    max=num3;
}
cout<<"The maximum number is : "<<max;
return 0;
}

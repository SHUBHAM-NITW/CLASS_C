//arrange three numbers in ascending order

#include<iostream>

using namespace std;

int main(){
int num1,num2,num3;
cout<<"Enter three numbers : ";
cin>>num1;
cin>>num2;
cin>>num3;



if(num1>num2){
    swap(num1,num2);
}
if(num1>num3){
    swap(num1,num3);
}
if(num2>num3){
    swap(num2,num3);
}

cout<<"The numbers in ascending order is : "<<num1<<" > "<<num2<<" > "<<num3;
return 0;
}

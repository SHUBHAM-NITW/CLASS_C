#include<iostream>

using namespace std;

int main(){
int year;
cout<<"Enter the year : ";
cin>>year;

if(year%4==0){
    cout<<"You have entered a leap year";
}
else{
    cout<<"Not a leap year";
}
return 0;
}

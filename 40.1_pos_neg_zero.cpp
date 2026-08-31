#include<iostream>

using namespace std;

int main(){

int num;

cout<<"Enter your number :";
cin>>num;

if(num>=0){
    if(num==0){
        cout<<"The number is zero"<<endl;
    }
    else{
    cout<<"Positive number";

    }
}
else{
    cout<<"Negative Number";
}
return 0;
}

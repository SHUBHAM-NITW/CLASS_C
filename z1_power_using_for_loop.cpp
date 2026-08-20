#include<iostream>
#include <string>
using namespace std;

int main(){

    //2 to the. power of 3
    int a = 2 ;
    int power = 4;
    for (int i=1 ; i<power;i++){
    a = a*2;

    } 
    cout << "2 to the power of "<<power<<" is : " << a << endl;
    return 0 ;
}
#include <iostream>
using namespace std;

int main (){
    int num;
    cout<< "Enter your number : ";
    cin >> num;
    if (num%2==0){
        cout << "the number is even";
    }else{
        cout << "the number is odd"<<endl;
    }
    return 0;
}
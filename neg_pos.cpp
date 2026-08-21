#include <iostream>
using namespace std;

int main (){
    int num;
    cout<< "Enter your number : ";
    cin >> num;
    if (num<0){
        cout << "The number is Negative"<<endl;
    }else if (num==0){
        cout << "The number is Zero"<<endl;
    }else{
    cout << "The number is Positive"<<endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int num;
    cout << "Table of : ";
    cin >> num;
    for (int i=1; i<=10 ; i ++){
        cout <<num<< " X "<< i <<" = "<< num*i<<endl;
    }
    return 0 ;

}
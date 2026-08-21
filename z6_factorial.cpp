#include <iostream>
using namespace std;

int main (){
    int num,ans;
    ans= 1;
    cout << "Enter the number which you want to find Factorial "<<endl;
    cin>> num;
    for (int i =1; i<= num; i++ ){
        ans = ans *i;
    }
    cout << "your factorial of "<< num << " is "<< ans <<endl;
    return 0 ;
}
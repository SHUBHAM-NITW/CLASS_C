#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int num= 5;
    for (int i = num  ; i<= -(1-num) ; i= i-1){
        cout<< i;
       if (i > 0){ 
        cout<<"*";
        i=i-1;
       }if (i> -num){
        cout<< "*";
        i=i-1;
       }

    }
    return 0;
}



#include <iostream>

using namespace std;

int main(){
       int num;
        long long multi = 1;
    while(true)
    {
     
        cout<<"Enter the numbers to multiply (input = 0 to exit) :  ";
        cin>>num;
        if (num == 0){
            break;
        }
            multi = num * multi;
        }
        cout << "total multiplication : "<< multi<<endl;
    return 0 ;
}
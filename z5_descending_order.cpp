#include <iostream>
using namespace std;

int main (){
    int a,b,c;
    cout << "Enter 3 numbers to arranged them in descending order"<<endl;
    cin >> a ;
    cin >> b ;
    cin >> c ;

    if (a<b){
        swap(a,b);
    }if (b<c){
        swap (b,c);
    }
    cout << "Descending Order is "<<a<<">"<<b<< ">"<<c<<endl;
    return 0;
}


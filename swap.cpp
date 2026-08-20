#include <iostream>

using namespace std;

int main(){

    int m,n;
    m= 2;
    n=3;
    cout<< m<<n<<endl;

     int temp;
     temp=m;
     m = n;
     n= temp;
     cout <<m<<n<<endl;
     swap(m,n);
     cout <<m<<n<<endl;
     return 0 ;
}
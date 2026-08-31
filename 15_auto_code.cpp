#include<iostream>
#include<typeinfo>

using namespace std;

int main(){
auto x='a';
cout<<"data type is "<<typeid(x).name();

return 0;
}

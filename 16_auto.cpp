#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    auto myInteger = 42;
    auto myDouble = 3.14;
    auto myCharacter = 'Z';
    auto myString = "Hello";

    cout << "myInteger type: " << typeid(myInteger).name() <<endl;
    cout << "myDouble type: " << typeid(myDouble).name() <<endl;
    cout << "myCharacter type: " << typeid(myCharacter).name() <<endl;
    cout << "myString type: " << typeid(myString).name() <<endl;

    return 0;
}
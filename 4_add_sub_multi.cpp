#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 8, b=3;
    int addition, subtaction, multiplication;
    double division ,reminder;
    
    addition = a+b;
    subtaction = a-b;
    multiplication = a*b;
    division = a/b;
    reminder = a%b;
    
    cout << "1st Number :"<<a<<endl
           << "2nd Number :"<<b<<endl
           << "Addition :"<< addition<<endl
           << "Subtaction :"<< subtaction<<endl
           << "Multiplication : "<< multiplication<<endl
           <<"division :"<< division<<" and reminder is : "<< reminder<<endl;

    return 0;
}
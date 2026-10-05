#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string name;
    int marks;
    for (int i = 0; i < n; i++) {
        cin >> name >> marks;
        cout << name << " ";
        if (marks >= 90) {
            cout << "A\n";
        } else if (marks >= 80) {
            cout << "B\n";
        } else if (marks >= 70) {
            cout << "C\n";
        } else if (marks >= 60) {
            cout << "D\n";
        } else {
            cout << "F\n";
        }
    }
    return 0;
}

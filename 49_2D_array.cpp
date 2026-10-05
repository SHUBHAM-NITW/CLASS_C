#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    cout << "Enter 9 elements for a 3x3 array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "\nThe 2-dimensional array is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}

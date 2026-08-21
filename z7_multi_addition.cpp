#include <iostream>

using namespace std;

int main (){
    int total;
    int add,num;
    add=0;
    cout << "How many numbers do you want to add? ";
    cin >> total;
    cout << "Enter you number one by one and press Enter"<<endl;
    for (int i=0; i<total;i++){
        
        cin>> num;
        add = add +num;

    }
        cout <<"Total addition of your Numbers are "<< add<<endl;

    return 0;

}
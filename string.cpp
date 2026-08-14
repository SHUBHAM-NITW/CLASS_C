#include <iostream> 
#include <string>
using namespace std;

int main() {
    string name;
    string title;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your title :";
    cin >> title ;
    
    string allname = name.append(title);
    cout << allname<< endl;
    for (int i = 0 ; i < allname.length() ; i ++)
    {
        cout << (i+1) <<"number alphabet is :" << allname[i]<<endl;
    }
    

    return 0;
}
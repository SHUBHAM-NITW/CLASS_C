#include<iostream>
#include<cmath>

using namespace std;

int main(){
int i,j;
cout<<"Enter the base number : ";
cin>>i;
cout<<"Enter the power : ";
cin>>j;
int ans= pow(i,j);
cout<<i<<" to the power "<<j<<" = "<<ans;

return 0;
}
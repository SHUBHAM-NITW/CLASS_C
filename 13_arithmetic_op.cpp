
#include<iostream>

using namespace std;

int main(){
int x=5;
x++;
cout<<"X++ value: "<<x<<endl;
x--;
cout<<"X-- value: "<<x<<endl;

int y=x;
cout<<"Y value: "<<y<<endl;
x+=x;
cout<<"X+=X value: "<<x<<endl;
x-=2;
cout<<"X-=2 value: "<<x<<endl;
x*=x;
cout<<"X*=X value: "<<x<<endl;
x/=8;
cout<<"X/=8 value: "<<x<<endl;
x%=3;
cout<<"X%=3 value: "<<x<<endl;
cout<<"X&=Y value: "<<(x&y)<<endl;
cout<<"X|=2 value: "<<(x|2)<<endl;
cout<<"X^=4 value: "<<(x^4)<<endl;
cout<<"X>>=4 value: "<<(x>>4)<<endl;
cout<<"X<<=7000 value: "<<(x<<7000)<<endl;

return 0;
}

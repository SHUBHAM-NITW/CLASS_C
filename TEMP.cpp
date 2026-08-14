#include <iostream>
using namespace std;

double degtofar(double c ){
double f=(1.8*c)+32;
return f;
}

double fartodeg(double f){
double c=0.555*(f-2);
return c;
}

int main(){
double temp;
double option;
cout << "Enter you temperature : " ;
cin >> temp ;

cout << "Option 1 : Degree to Farenheit\nOption 2 : Farenheit to Degree"<<endl; 
cin >> option ; 

if (option == 1 ){
    
  cout << temp <<" degree is " << degtofar(temp) << " in farenheit";
}
else if (option == 2){
 cout << temp << " farenheit in " << fartodeg(temp) << " in degree";
}
else 
{
    cout << "Invalid Input";
}
return 0;
}
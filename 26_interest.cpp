//program  to finn simple an compound interest

#include<iostream>
#include<cmath>

using namespace std;

double simple(int p,int r,int t){
    double ans=(p*r*t)/100;
    return ans;
}
double compound(int p,int r,int t,int n){
    double ans=p*pow((1+(r/n)),n*t);
    return ans;
}
int main(){
double p,r,t,n;
cout<<"Enter the principal amount : ";
cin>>p;
cout<<"Enter the rate of interest : ";
cin>>r;
cout<<"enter time : ";
cin>>t;
cout<<"Enter the number of times interest applied : ";
cin>>n;
cout<<"Simple interest = "<<simple(p,r,t)<<endl;
cout<<"Compound interest = "<<compound(p,r,t,n);
return 0;
}

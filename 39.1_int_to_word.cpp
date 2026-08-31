#include<iostream>

using namespace std;

int main(){
int num;
cout<<"Enter your number : ";
cin>>num;

if(num>999 || num<100){
    cout<<"Number is out of range ";
}
else{
    int hundred=num/100;
    int ten=(num%100)/10;
    int ones=(num%10);

    if(hundred==1){
        cout<<"One hundred ";
    }

    if(hundred==2){
        cout<<"Two hundred ";
    }

    if(hundred==3){
        cout<<"Three hundred ";
    }

    if(hundred==4){
        cout<<"Four hundred ";
    }

    if(hundred==5){
        cout<<"Five hundred ";
    }

    if(hundred==6){
        cout<<"Six hundred ";
    }

    if(hundred==7){
        cout<<"Seven hundred ";
    }

    if(hundred==8){
        cout<<"Eight hundred ";
    }

    if(hundred==9){
        cout<<"Nine hundred ";
    }
    if(ten==1){
        if(ones==0){
            cout<<"Ten";
        }
        if(ones==1){
            cout<<"Eleven";
        }
        if(ones==2){
            cout<<"Twelve";
        }
        if(ones==3){
            cout<<"Thirteen";
        }
        if(ones==4){
            cout<<"Forteen";
        }
        if(ones==5){
            cout<<"Fifteen";
        }
        if(ones==6){
            cout<<"Sixteen";
        }
        if(ones==7){
            cout<<"Seventeen";
        }
        if(ones==8){
            cout<<"Eighteen";
        }
        if(ones==9){
            cout<<"Ninteen";
        }
    }
    if(ten==2){
        cout<<"Twenty ";
    }
    if(ten==3){
        cout<<"Thirty ";
    }
    if(ten==4){
        cout<<"Forty ";
    }
    if(ten==5){
        cout<<"Fifty ";
    }
    if(ten==6){
        cout<<"Sixty ";
    }
    if(ten==7){
        cout<<"Seventy ";
    }
    if(ten==8){
        cout<<"Eighty ";
    }
    if(ten==9){
        cout<<"Ninty ";
    }
    
    if(ones==1){
        cout<<"One";
    }
    if(ones==2){
        cout<<"Two";
    }
    if(ones==3){
        cout<<"Three";
    }
    if(ones==4){
        cout<<"Four";
    }
    if(ones==5){
        cout<<"Five";
    }
    if(ones==6){
        cout<<"Six";
    }
    if(ones==7){
        cout<<"Seven";
    }
    if(ones==8){
        cout<<"Eight";
    }
    if(ones==9){
        cout<<"Nine";
    }
}



return 0;
}

#include <iostream>
using namespace std;

int main() {
 const float pi = 3.14;
    
    int side= 2, recheight= 2, recbase= 3, rad =4 , height=5,base=6;
    int square, rectangal;
    float circle, triangle;
    
    square = side*side;
    rectangal = recheight*recbase;
    circle = pi*rad*rad;
    triangle = 0.5*height*base;
    
    cout << "area of square :"<<square<<endl
            <<"area of Rectangle :"<< rectangal<<endl
            <<"area of circle :" << circle<<endl
            <<"area of triangle :"<<triangle<<endl;
   
    return 0;
}
//detailed explanation of a basic C++ program

#include<iostream>   //iostream stands for standard input output stream. #include<iostream> is a library that provides input and output functionality

using namespace std;   //the std is a short form of standard, the std namespace contains the built in classes and declared functions.
                       // You can find all the standard types and functions in the C++  std space 

int main(){            // int main is the main function. it represents the function that returns some integer(in this case 0).
                       //'0' represents the succesful execution of a program. int main(void) represents a void function that returns nothing.
                       //Whatever we write inside the function it should be enclosed within the curly brackets "{}"

    cout<<"Hello World !";     //cout is used to display output to the output terminal. cout is followed by '<<' after which we write what the output we need to see
                               //in this code after "<<" we opened a double quotation "".Compiler prints the whtever written in this double quotation as it is whether it is number,
                               //string,character or special character. Here we have written "Hello World !" which will be printed as it is completely
    
    return 0;                  // since int main is a function we need to return some value after the execution of this function which in this case is '0'
                               // it means we return nothing and the code is run succesfully
}
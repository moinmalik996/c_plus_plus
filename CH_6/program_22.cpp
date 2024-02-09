#include <iostream>
#include <random>

using namespace std;

void multiply(double = 1, double = 1);

int main(){

    multiply();
    multiply(2.0, 3.5);
    multiply(3.9, 1.5);
    

    return 0;
}


void multiply(double num1, double num2){
    // This function have the defaults as 1
    cout<<"The multiplication of "<<num1 <<" and "<<num2 <<" is = "<< num1 * num2 <<endl<<endl;
}
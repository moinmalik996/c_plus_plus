#include<iostream>

using namespace std;


// Function Prototype
void divide(double, double);

int main(){

    double num1,
            num2;

    cout<<"Enter number 1 : ";
    cin>>num1;

    cout<<endl;

    cout<<"Enter number 2 : ";
    cin>>num2;

    divide(num1, num2);


    return 0;
}



void divide(double num1, double num2){
    /*
    This function only returns nothis when 
    the second argument is 0;
    */
    if(num2 == 0.0){
        cout<<"Sorry, I cannot divide by zero."<<endl;
        return;
    }
    
    cout<<"The qoutient is : "<< (num1 / num2) <<endl;
}
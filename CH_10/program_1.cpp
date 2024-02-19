#include<iostream>

using namespace std;

int main(){

    int num1, num2;
    short num3, num4;

    char name[1];
    double price = 123.34;


    cout<<"The address of num1 is "<< long(&num1) <<endl;
    cout<<"The address of num2 is "<< long(&num2) <<endl;
    cout<<"The address of num3 is "<< long(&num3) <<endl;
    cout<<"The address of num4 is "<< long(&num4) <<endl;
    cout<<"The address of name is "<< long(&name) <<endl;
    cout<<"The address of price is "<< long(&price) <<endl;

    return 0;
}
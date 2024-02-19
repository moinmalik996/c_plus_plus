#include<iostream>

using namespace std;

int main(){

    int x = 25;
    int* ptr;

    cout<<"The value of x is "<<x<<endl;
    ptr = &x;
    cout<<"The value of x is "<<*ptr<<endl;

    *ptr = *ptr + 25;

    cout<<"------------------------"<<endl;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of x is "<<*ptr<<endl;

    return 0;
}
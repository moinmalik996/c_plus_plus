#include<iostream>

using namespace std;

int factorial(int);

int main(){

    int num;
    
    cout<<"Enter a number to find factorial : ";
    cin>>num;

    cout<<"\nThe factorial of "<< num << " is : "<< factorial(num)<<endl;

    return 0;
}

int factorial(int num){

    if(num == 0)
        return 1;
    
    return num * factorial(num - 1);
}
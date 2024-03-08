#include<iostream>

using namespace std;

int fibonacci(int);

int main(){

    int number;
    cout<<"Enter a number : ";
    cin>>number;

    cout<<"The first "<<number << " fibonacci numbers are : \n";

    for(int i=0; i<number; i++){
        cout<<fibonacci(i)<<" ";
    }


    return 0;
}

int fibonacci(int x){

    if(x <= 0)
        return 0;
    else if( x == 1)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}
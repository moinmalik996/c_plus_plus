#include <iostream>

using namespace std;



int square(int);
double square(double);

int main(){


    int num1 = 3;
    double num2 = 3.5;

    cout<<"The square of "<<num1<<" is = "<<square(num1)<<endl;
    cout<<"The square of "<<num2<<" is = "<<square(num2)<<endl;


    return 0;
}


int square(int x){
    return x * x;
}


double square(double x){
    return x * x;
}
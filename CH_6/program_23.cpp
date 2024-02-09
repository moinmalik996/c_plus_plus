#include <iostream>

using namespace std;

void double_it(int &);


int main(){

    int x = 10;
    cout<<"The value of X is = "<<x<<endl;

    double_it(x);

    cout<<"Now the value after double_it() become : "<<x<<endl;
    return 0;
}


void double_it(int &num){
    num *= 2;
}
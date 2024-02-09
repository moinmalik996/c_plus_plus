#include <iostream>

using namespace std;


void func_call();

int main(){

    func_call();
    func_call();
    func_call();
    func_call();



    return 0;
}


void func_call(){
    int num = 5;
    cout<<"local variable num = "<< num << endl;
    num = 99;
}
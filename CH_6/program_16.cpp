#include <iostream>

using namespace std; // namespace std;

int num = 5;

void myfunc();

int main(){

    cout<<"In main, The value of num is : "<<num<<endl<<endl;
    myfunc();
    cout<<"Back in main, The value of num is : "<<num<<endl;


    return 0;
}


void myfunc(){
    cout<<"In myfunc() the value of num is : "<< num <<endl;
    num = 50;
    cout<<"But , Its modified to "<< num <<endl;
}
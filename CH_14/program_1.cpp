#include<iostream>

using namespace std;

void message(int);


int main(){

    message(5);


    return 0;
}

void message(int times){
    
    if(times > 0){
        cout<<"Message - "<< times <<endl;
        message(times - 1); // recursive call
    }
}
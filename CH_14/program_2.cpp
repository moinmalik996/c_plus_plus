#include<iostream>

using namespace std;

void message(int);



int main(){

    message(5);

    return 0;
}



void message(int times){

    cout<<"Message - "<< times << endl;

    if(times > 0 ){
        message(times - 1);
    }

    cout<<"Message - " << times << " is returning" << endl;
}
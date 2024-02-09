#include <iostream>


using namespace std;


void showStatic();

int main(){


    for(int i = 0; i < 5; i++){
        showStatic();
    }


    return 0;
}

void showStatic(){

    static int numCalls = 0;
    cout<<"The function is called "<< ++numCalls << " times"<< endl;
}
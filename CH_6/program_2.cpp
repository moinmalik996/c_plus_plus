#include<iostream>

using namespace std;


void displayMessage(int iter){
    cout<<"This is the interation number : "<< iter << endl;   
}



int main(){

    int num;

    cout<<"How many times you want to print the message : ";
    cin>>num;


    for(int i=1; i<=num; i++){
        displayMessage(i);
    }


    return 0;
}
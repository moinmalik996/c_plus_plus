#include <iostream>

using namespace std;

int main(){

    const int NUM_HOURS = 5;
    int hours[NUM_HOURS];
    

    for(int i=0; i<NUM_HOURS; i++){
        cout<<"Enter hours for employee-"<<i + 1<<" : ";
        cin>>hours[i];
    }


    cout<<"\n************** Displaying Data **************\n";

    for(int i=0; i<NUM_HOURS; i++){
        cout<<"The hours for the week are : "<<hours[i] * 7<<endl;
    }


    return 0;
}
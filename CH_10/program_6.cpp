#include<iostream>

using namespace std;

int main(){
    
    const int SIZE = 5;
    int numbers[SIZE] = {3, 6, 8, 3, 6};

    for(int i = 0; i < SIZE; i++){
        cout<<"Element at index-"<<i<<" is "<< *(numbers + i)<<endl;
    }
    
    return 0;
}
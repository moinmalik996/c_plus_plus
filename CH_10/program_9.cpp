#include <iostream>

using namespace std;

int main(){

    const int SIZE = 5;
    int array[SIZE] = {1, 9, 2, 8, 5};

    int *ptr;

    ptr = array;

    for(int i = 0; i < SIZE; i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    cout<<"\n---------------------\n";

    for(int i = 0; i < SIZE; i++){
        ptr--;
        cout<<*ptr<<" ";
    }

    cout<<"\n";

    return 0;
}
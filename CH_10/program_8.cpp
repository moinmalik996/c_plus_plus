#include<iostream>

using namespace std;

const int SIZE = 5;

int main(){

    int array[SIZE] = {5, 1, 4, 2, 3};
    int *ptr;

    for(int i = 0; i < SIZE; i++){
        ptr = &array[i];
        cout<<*ptr<<endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    double coins[5] = {1.6, 4.7, 8.3, 6.0, 2.7};
    double *ptr;

    ptr = coins;

    //Accessing array elements by using subscript with pointer.
    for(int i = 0; i < 5; i++){
        cout<<"element at index-"<<i<<" : "<<ptr[i]<<endl;
    }

    cout<<"\n---------------------------------"<<endl;

    //Accessing array elements by using pointer notaion with array name.
    for(int i = 0; i < 5; i++){
        cout<<"element at index-"<<i<<" : "<<*(coins + i)<<endl;
    }

    return 0;
}
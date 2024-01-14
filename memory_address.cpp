#include<iostream>


using namespace std;


void double_it(int* x){
    
    *x = *x + 2;

    cout<<"Inside function : "<< *x <<endl;
}

int main(){

    int x;
    cout<<"Enter a Number : ";
    cin>>x;

    double_it(&x);

    cout<<"Outside in the main Now : "<< x <<endl;

}
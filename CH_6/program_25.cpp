#include<iostream>

using namespace std;

void get_values(int&, int&);
void order_them(int&, int&);


int main(){

    int first, second;
    get_values(first, second);
    order_them(first, second);


    cout<<"\n\nThe order of values should be "<< first <<" "<< second << endl << endl;

    return 0;
}


void get_values(int &num1, int &num2){

    cout<<"Enter for value 1 : ";
    cin>>num1;

    cout<<"Enter for value 2 : ";
    cin>>num2;
}

void order_them(int &num1, int &num2){

    int temp;
    if(num1 > num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
}
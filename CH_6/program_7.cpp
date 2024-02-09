#include <iostream>

using namespace std;

// Function Prototype
int get_square(int);


int main(){

    int number;

    cout<<"Enter a number : ";
    cin>>number;


    cout<<"\n\nThe square root of "<< number <<" is "<< get_square(number)<<endl;



    return 0;
}



/*********************************
* This function will return the  *
* square of the number that we   *
* pass to this function.        */
int get_square(int num){
    return num * num;
}
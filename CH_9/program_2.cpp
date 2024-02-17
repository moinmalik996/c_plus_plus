#include <iostream>

using namespace std;

const int SIZE = 20;


int binarySearch(const int [], int, int);

int main(){

    int my_array[20] = {
        101, 203, 356, 378, 389,
        401, 450, 478, 490, 500,
        525, 534, 546, 578, 587,
        723, 734, 745, 756, 767,
    };
    int number;

    cout<<"Enter a number you want to search : ";
    cin>>number;

    int result = binarySearch(my_array, SIZE, number);

    cout<<endl;

    if(result != -1){
        cout<<number<<" found at "<<result<<" index."<<endl;
    } else {
        cout<<number<<" is not in the list."<<endl;
    }


    return 0;
}



int binarySearch(const int arr[], int size, int item){

    int first = 0,
        last = size - 1,
        position = -1,
        middle;

    bool found = false;
    while (first <= last & found == false){
        int middle = (first + last) / 2;
        if(arr[middle] == item){
            found = true;
            position = middle;
        }
        else if(arr[middle] > item){
            last = middle - 1;
        }
        else {
            first = middle + 1;
        }
        
    }

    return position;
}
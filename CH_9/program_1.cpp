#include <iostream>

using namespace std;

int searchArray(const int [], int, int);

const int SIZE = 5;

int main(){

    int number;
    int numbers[SIZE] = {12, 34, 456, 67, 100};

    cout<<"Enter a number you want to search : ";
    cin>>number;

    int result = searchArray(numbers, SIZE, number);

    if(result != -1){
        cout<<"\nNumber found at position "<<result<<endl;
    } else {
        cout<<"\nSorry, number not found"<<endl;
    }

    return 0;
}



int searchArray(const int arr[], int size, int item){

    int index = 0;
    int position = -1;
    bool found = false;

    while(index < size && found == false){
        if(arr[index] == item){
            found = true;
            position = index;
        }

        index++;
    }

    return position;

}
#include <iostream>

using namespace std;

void sortArray(int [], int);
void showArray(int [], int);

const int SIZE = 10;

int main(){

    int numbers[SIZE] = {1, 6, 3, 8, 9, 4, 9, 9, 15, 5};

    showArray(numbers, SIZE);
    sortArray(numbers, SIZE);
    cout<<"After Sorting : "<<endl<<endl;
    showArray(numbers, SIZE);

    return 0;
}


void sortArray(int arr[], int size){

    int temp;
    bool swap;

    do
    {
        swap = false;
        for(int count = 0; count < size -1; count++){
            if(arr[count] > arr[count + 1]){
                temp = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = temp;
                swap = true;
            }
        }
    } while(swap);
    
}

void showArray(int arr[], int size){
    for(int count = 0; count < size; count++){
        cout<<"Element at index-"<<count<<" : "<<arr[count]<<endl;
    }
    cout<<endl;
}
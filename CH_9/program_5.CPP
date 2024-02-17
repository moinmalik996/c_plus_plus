#include <iostream>

using namespace std;


void selectionSort(int [], int);
void showArray(int [], int);

const int SIZE = 10;

int main(){


    int numbers[SIZE] = {3, 7, 9, 1, 2, 5, 4, 7, 12, 0};

    showArray(numbers, SIZE);
    selectionSort(numbers, SIZE);
    showArray(numbers, SIZE);


    return 0;
}


void selectionSort(int array[], int size){

    int startScan, minIndex, minValue;

    for(startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minValue = array[startScan];

        for(int index = startScan + 1; index < size; index++){
            
            if (array[index] < minValue){
                
                minValue = array[index];
                minIndex = index;
            }
        }

        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}


void showArray(int arr[], int size){
    for(int count = 0; count < size; count++){
        cout<<"Element at index-"<<count<<" : "<<arr[count]<<endl;
    }
    cout<<endl;
}
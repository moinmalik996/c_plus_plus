#include<iostream>
#include<algorithm>


using namespace std;

void quickSort(int[], int, int);
void displayArray(int[], int);
int getPivotidx(int[], int, int);

int main(){

    const int SIZE = 10;
    int myarr[SIZE] = {2, 5, 8, 10, 5, 0, 9, 12, 3, 78};

    cout<<"Before sorting\n";
    displayArray(myarr, SIZE);

    quickSort(myarr, 0, SIZE - 1);

    cout<<"\nAfter sorting\n";
    displayArray(myarr, SIZE);

    return 0;
}


void displayArray(int arr[], int size){

    for(int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

void quickSort(int arr[], int start, int end){

    if(start < end){

        int pivotIndex = getPivotidx(arr, start, end);

        // recursive calls to quickSort function
        quickSort(arr, start, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, end);
    }
}

int getPivotidx(int arr[], int start, int end){

    int pivotIdx = start;
    int pivotValue = arr[start];

    for(int pos = pivotIdx + 1; pos <= end; pos++){

        if(arr[pos] < pivotValue){
            // swap current element with the [pivot + 1] index
            // after this swap the current item will be next to pivot position
            swap(arr[pivotIdx + 1], arr[pos]);

            // now we can change the pivot position with the [pivot + 1] position
            swap(arr[pivotIdx], arr[pivotIdx + 1]);

            // as we have moved the pivot value a one index above
            // to make the pivot consistent we also increased its index value
            pivotIdx++;
        }
        
    }

    return pivotIdx;
}
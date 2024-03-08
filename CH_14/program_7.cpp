#include<iostream>

using namespace std;

int binarySearch(const int[], int, int, int);


int main(){

    int myarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 34, 45, 56, 67, 78, 89, 90};

    cout<<"The digit 45 is located at "<<binarySearch(myarr, 0, 18, 45)<<endl;

    return 0;
}


int binarySearch(const int arr[], int start, int end, int number){

    int middle = (start + end) / 2;

    if(start > end)
        return -1;

    if(number == arr[middle])
        return middle;
    
    if(number > arr[middle])
        return binarySearch(arr, middle + 1, end, number);
    else
        return binarySearch(arr, start, middle -1, number);
}
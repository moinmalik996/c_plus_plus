#include<iostream>
#include<cstdlib>
#include<ctime>

//FUnction Prototype
int *randomNumbers(int);

using namespace std;


int main(){

    const int SIZE = 5;
    int *numbers;

    numbers = randomNumbers(SIZE);

    for(int counter = 0; counter < SIZE; counter++){
        cout<<"Element generated at index-"<<counter+1<<" : "<< *(numbers + counter)<<endl;
    }


    // free the dynamically allocated memory.
    delete [] numbers;
    numbers = 0;
    


    return 0;
}


int *randomNumbers(int size){

    int *array;

    if(size <= 0)
        return NULL;

    // Dynamically allocate memory.
    array = new int[size];

    // Seed the random number generator by passing
    // the return value of time(O) to srand

    srand(time(0));

    for(int count = 0; count < size; count++){
        array[count] = rand();
    }

    // Return a pointer to array
    return array;
}

#include <iostream>
#include<fstream>

using namespace std;


int main(){


    
    const int NUM_EMPLOYEES = 15;
    string names[NUM_EMPLOYEES];
    int count = 0;

    ifstream myfile;

    // opening the file object
    myfile.open("data.dat");

    if(!myfile){
        cout<<"Error : File not found"<<endl;
    } else {

        // looping and feeding the data from file to array
        while(count < NUM_EMPLOYEES && myfile >> names[count]){
            count++;
        }
        cout<<"\nDone Feeding the data.";
        myfile.close();
        cout<<"\nFile Closed.\n";

    }

    for(count=0; count < NUM_EMPLOYEES; count++){
        // A condition to avoid empty locations in array.
        if(names[count] != "")
            cout<<"Name-"<<count+1<<"  :  "<<names[count]<<endl;
    }

    return 0;
}
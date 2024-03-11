#include<iostream>
#include<string>

using namespace std;

void moveDisks(int, string, string, string);

int main(){

    moveDisks(3, "peg 1", "peg 2", "peg 3");
    cout<<"\nAll disks have been moved\n";

    return 0;
}

void moveDisks(int n, string source, string destination, string temp){

    if(n > 0){
        
        moveDisks(n-1, source, temp, destination);

        cout<<"Move a disk from "<< source
            <<" to "<< destination << endl;

        moveDisks(n-1, temp, destination, source);
    }
}
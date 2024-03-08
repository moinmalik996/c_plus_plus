#include<iostream>

using namespace std;

int main(){

    const int LENGTH = 80;
    char line[LENGTH];

    cout<<"Enter a line not more than "<<LENGTH - 1<<" : ";
    cin.getline(line, LENGTH);

    cout<<"\nThe line you entered is\n";

    for(int i=0; line[i] != '\0'; i++){
        cout<<line[i];
    }

    return 0;
}
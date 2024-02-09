#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

    string name1,
            name2,
            name3;
    
    ofstream outputFile;

    //  opening te file
    outputFile.open("Employees.txt");

    cout<<"Enter Name 1 : ";
    cin>>name1;
    outputFile << name1 << endl;

    cout<<"Enter Name 2 : ";
    cin>>name2;
    outputFile << name2 << endl;

    cout<<"Enter Name 3 : ";
    cin>>name3;
    outputFile << name3 << endl;

    // outputFile << name1 << endl;
    // outputFile << name2 << endl;
    // outputFile << name3 << endl;

    //closing the file
    outputFile.close();

    return 0;
}
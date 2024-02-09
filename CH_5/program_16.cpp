#include <iostream>
#include <fstream>

using namespace std;


int main(){

    ofstream outputFile;

    outputFile.open("demofile.txt");
    
    cout<<"Writing to file now"<<endl;

    outputFile << "Hello\n";
    outputFile << "Moin\n";
    outputFile << "Malik\n";
    outputFile << "Abbas";

    outputFile.close();


    return 0;
}
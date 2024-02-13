#include <iostream>

using namespace std;

int main(){

    const int COUNT = 5;
    
    int hours[COUNT];

    cout<<"Enter the hours for "<<COUNT<<" employees.\n";
    cin>>hours[0];
    cin>>hours[1];
    cin>>hours[2];
    cin>>hours[3];
    cin>>hours[4];


    cout<<"\nDisplaying Data"<<endl;
    cout<<hours[0]<<endl;
    cout<<hours[1]<<endl;
    cout<<hours[2]<<endl;
    cout<<hours[3]<<endl;
    cout<<hours[4]<<endl;
    


    return 0;
}
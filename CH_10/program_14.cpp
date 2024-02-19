#include <iostream>

using namespace std;

int main(){

    double *sales,
            total = 0,
            average = 0;

    int numDays;
    cout<<"Enter no of days to calculate sale : ";
    cin>>numDays;

    sales = new double[numDays];

    cout<<endl<<endl;

    for(int i = 0; i < numDays; i++){
        cout<<"Enter sale of day-"<<i+1<<" : ";
        cin>>sales[i];

        total += sales[i];
        average = total / i;
    }

    cout<<"-------------------------"<<endl;
    cout<<"The total   = "<< total<<endl;
    cout<<"The average = "<< average<<endl;


    delete [] sales;
    sales = 0;

    return 0;
}
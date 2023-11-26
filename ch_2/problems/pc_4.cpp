/*
Restourant Bill
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    const float TAX_PERC = 6.75;
    const float TIP_PERC = 15.0;

    float bill = 44.50;

    float tax_amount = bill * TAX_PERC / 100;
    float taxed_bill = bill + tax_amount;

    float tip_amount = taxed_bill * TIP_PERC  / 100;

    float total_amount = bill + tax_amount + tip_amount;

    cout<<"The total meal cost is  : "<<bill<<endl;
    cout<< setprecision(4)<<"The total tax amount is : "<<tax_amount<<endl;
    cout<< setprecision(4)<<"The total tip amount is : "<<tip_amount<<endl;
    cout<<"------------------------------"<<endl;
    cout<< setprecision(3)<<"The total bill is       : "<<total_amount<<endl;


    return 0;
}
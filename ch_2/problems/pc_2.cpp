/*
Sales Prediction
*/

#include <iostream>


using namespace std;


int main(){

    const float SALES_PERC = 62.0;

    long double total_sales = 4600000;

    long int east_coast_sales;

    east_coast_sales = total_sales * (SALES_PERC / 100);

    cout << fixed << "The Sales for East Coast : $" << east_coast_sales << endl;

    return 0;


}

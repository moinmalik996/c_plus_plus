/*
Sales Tax
*/

#include <iostream>

using namespace std;

int main(){

    const float STATE_TAX = 4.0;
    const float COUNTRY_TAX = 2.0;

    float total_sales = 54;

    float state_tax_amount = total_sales * STATE_TAX / 100;
    float country_tax_amount = total_sales * COUNTRY_TAX / 100;

    cout << "The total sale is   : " << total_sales << endl;
    cout << "The state tax is    : " << state_tax_amount << endl;
    cout << "The country tax is  : " << country_tax_amount << endl << endl;
    cout << "The total tax is    : " << country_tax_amount + state_tax_amount << endl;






    return 0;
}


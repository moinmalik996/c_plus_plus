#include "program_2.h"
#include <iostream>
#include <iomanip>


using namespace std;

// Definition of static memebr of the budget class.
double Budget::corpBudget = 0;

int main(){

    const int N_DIVISIONS = 5;
    Budget divisions[N_DIVISIONS];

    for(int count = 0; count < N_DIVISIONS; count++){

        double bud;
        cout<<"Enter the budget for division-"<<count+1<<" : ";
        cin>>bud;

        divisions[count].addBudget(bud);

    }

    cout<< setprecision(2);
    cout<< showpoint << fixed;

    for(int i=0; i<N_DIVISIONS; i++){
        cout<<"Division-"<<i+1<<" : "<<divisions[i].getDivBudget()<<endl;
    }

    cout<<"--------------------------------\n";
    cout<<"The Total Budget is  :  "<<divisions[0].getCorpBudgget()<<endl;

    return 0;
}
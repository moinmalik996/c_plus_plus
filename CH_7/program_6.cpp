#include <iostream>
#include <iomanip>

using namespace std;


class Sale{
    private:
        double taxRate;

    public:
        Sale(double x){
            taxRate = x;
        }

        Sale(){
            taxRate = 0.0;
        }

        double calTotal(double cost){
            double total = cost + cost * taxRate;
            return total;
        }
};


int main(){


    Sale mysale1;
    Sale mysale2(.50);

    cout<<fixed<<showpoint<<setprecision(2);

    cout<<"The total of mysale1 = "<<mysale1.calTotal(45.76)<<endl;
    cout<<"The total of mysale2 = "<<mysale2.calTotal(97.093)<<endl;

    return 0;

}
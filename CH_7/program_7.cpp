#include <iostream>

using namespace std;

class Number{

    private:
        int largest,
            count,
            sum;

        bool isNewLargest(int);

    public:
        //default constructor
        Number();

        // Function Prototypes 
        bool addNumber(int);
        double getAverage();

        // Below are the inline functions
        int getCount(){
            return count;
        }
        int getLargest(){
            return largest;
        };
        int getSum(){
            return sum;
        };
};


int main(){

    Number mynum;

    int num;
    
    cin>>num;

    while(num >= 0){
        mynum.addNumber(num);
        cin >> num;
    }


    cout<<"The largest = "<<mynum.getLargest()<<endl;
    cout<<"The Sum     = "<<mynum.getSum()<<endl;
    cout<<"The count   = "<<mynum.getCount()<<endl;
    cout<<"The Average = "<<mynum.getAverage()<<endl;



}


Number::Number(){
    largest = count = sum = 0;
}

bool Number::addNumber(int x){
    if(x >= 0){
        sum += x;
        count++;
        if (isNewLargest(x)){
            largest = x;
        }
        return true;
    } else {
        return false;
    }
}

bool Number::isNewLargest(int x){
    if(x > largest){
        return true;
    } else {
        return false;
    }
}

double Number::getAverage(){
    if(count > 0){
        return static_cast<double>(sum) / count;
    } else {
        return 0;
    }
}
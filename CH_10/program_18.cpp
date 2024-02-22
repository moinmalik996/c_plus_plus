#include <iostream>

using namespace std;


class Squares{
    private:
        int length;
        int *sq;
    public:
        Squares(int len){
            length = len;
            sq = new int[length];
            for(int k = 0; k < length; k++){
                sq[k] = (k + 1) * (k + 1);
            }
            cout<<"Calling constructor completed\n";
        }

        void print(){
            for(int k = 0; k < length; k++)
                cout<<sq[k]<<" ";
            cout<<endl;
        }

        ~Squares(){
            delete [] sq;
            cout<<"Calling destructor completed\n";
        }
};

void displaySquares(Squares *sqPtr){
    cout<<"The list of squares is : ";
    sqPtr->print();
}

int main(){

    Squares sqrt(5);
    cout<<"The first 5 squares are : ";
    sqrt.print();


    return 0;
}
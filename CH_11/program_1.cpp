#include<iostream>

using namespace std;


class Example{
    private:
        int x;
    public:
        Example(int a){x = a;}
        void setX(int);
        void printValueandAddress();
};


int main(){

    Example obj1(12), obj2(45);


    cout<<"The address of obj1 is : "<<&obj1<<endl;
    cout<<"The address of obj2 is : "<<&obj2<<endl;


    obj1.printValueandAddress();
    cout<<endl;
    obj2.printValueandAddress();


    return 0;
}


void Example::setX(int a){
    x = a;
}

void Example::printValueandAddress(){
    cout<<"The value at address "<< this <<" is " << this->x;
}


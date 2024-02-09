#include <iostream>

using namespace std;


class Demo{

    public:
        Demo(){

            cout<<"This is constructor calling."<<endl;
        }
};


int main(){

    cout<<"Before the object is created"<<endl;
    Demo demo;
    cout<<"After the object is created"<<endl;

    return 0;
}
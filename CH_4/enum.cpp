#include<iostream>


using namespace std;


int main(){

    enum Roster {Tom, Jerry, Bull, Dog};
    enum Choice {one=1, two, three, four};

    Roster student;
    Choice choice;

    student = Dog;
    choice = two;

    cout<<"Student is :  "<<student<<endl;
    cout<<"Choices are : "<<choice<<endl;

    return 0;
}
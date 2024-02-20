#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        Person(string nm, int ag){
            name = nm;
            age = ag;
        }
        int get_age(){return age;}
        string get_name(){return name;}

};

struct Rectangle{
    int width, length;
};

int main(){

    Rectangle *recP;
    Person *perP;

    // Create a rectangle object and access it through pointer.
    Rectangle rect;
    recP = &rect;

    (*recP).length = 3; // not a good way to access attribute
    recP->width = 2; // a good way to handle this 

    cout<<"The area of rectangle : "<< recP->length * recP->width<<endl;

    recP = new Rectangle;
    recP->length = 5;
    recP->width = 4;

    cout<<"The area of rectangle : "<< recP->length * recP->width<<endl;

    perP = new Person("Moin Malik", 28);
    
    cout<<"\nThe name of person is  : "<<perP->get_name()<<endl;
    cout<<"The age of the person is : "<<perP->get_age()<<endl;

    recP = 0;
    delete recP;

    return 0;
}
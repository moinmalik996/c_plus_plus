#include <iostream>
#include <cmath>

using namespace std;


class Circle{
    private:
        double radius;

    public:
        // Function Prototyping
        void set_radius();
        void get_area();
};


int main(){


    Circle circle1, circle2;


    circle1.set_radius();
    circle2.set_radius();


    circle1.get_area();
    circle2.get_area();



    return 0;
}



/***************************************************
*               Circle::set_radius()               *
***************************************************/
void Circle::set_radius(){
            cout<<"Enter radius of circle : ";
            cin>>radius;
}

/***************************************************
*               Circle::get_area()                 *
***************************************************/
void Circle::get_area(){
            double area = 3.14 * pow(radius, 2);
            cout<<"\nThe area of circle of radius "<< radius <<" = "<< area <<endl;
}
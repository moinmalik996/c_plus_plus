#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

class Circle{
    private:
        double radius;
    
    public:
        Circle();
        void setRadius(double);
        double getRadius();
        double getArea();
};


int main(){

    Circle mycircle;

    double rad;
    cout<<"Enter the radius : ";
    cin>>rad;

    mycircle.setRadius(rad);

    cout<<"\n\nThe area of Circle with radius "<<mycircle.getRadius()<<" is = "<<mycircle.getArea()<<endl<<endl;

    return 0;
}

Circle::Circle(){
    cout<<"Setting the default value for radius\n";
    radius = 1.0;
}

void Circle::setRadius(double x){
    if(x <= 0){
        cout<<"\nCannot set value less than or equal to 0.\n";
        cout<<"\nSetting it to 1.0 as default.\n";
        x = 1.0; // setting it to 
    }
    radius = x;
}

double Circle::getRadius(){
    return radius;
}

double Circle::getArea(){
    return 3.14 * pow(radius, 2);
}
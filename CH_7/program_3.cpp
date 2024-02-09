#include <iostream>

using namespace std;

class Rectangle{

    private:
        double width,
                length;
    
    public:
        void setLength(double);
        void setWidth(double);
        double getLength();
        double getWidth();
        double getArea();

};


int main(){

    Rectangle rect;

    double length, width;

    cout<<"Enter Rectangle Length : ";
    cin>>length;

    cout<<"Enter Rectangle Width  : ";
    cin>>width;


    rect.setLength(length);
    rect.setWidth(width);
    
    cout<<"\nThe area of Rectangle = "<<rect.getArea()<<endl;


    return 0;
}


void Rectangle::setLength(double len){
    length = len;
}

void Rectangle::setWidth(double wid){
    width = wid;
}

double Rectangle::getLength(){
    return length;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getArea(){
    return length * width;
}
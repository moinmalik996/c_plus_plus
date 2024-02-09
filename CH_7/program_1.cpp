#include<iostream>
#include<cmath>


using namespace std;


class Circle{

    private:
        double radius;
    
    public:

        void set_radius(){
            double rad;
            cout<<"Enter radius of circle : ";
            cin>>rad;
            radius = rad;  
        }

        void get_area(){
            double area = 3.14 * pow(radius, 2);
            cout<<"\nThe area of Radius = "<<area<<endl<<endl;
        }

};

int main(){

    Circle mycircle;
    
    mycircle.set_radius();
    mycircle.get_area();
    



    return 0;
}
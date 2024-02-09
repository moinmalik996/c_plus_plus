#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
        char sex;

    public:

        void setData(string x, int y, char z){
            name = x;
            age = y;
            sex = z;
        }

        void displayData(){
            cout<<"\nName : "<<name<<endl;
            cout<<"Age  : "<<age<<endl;
            cout<<"Sex  : "<<sex<<endl;
        }
};

void setFunctionality(Person &per){

    string name;
    int age;
    char sex;

    cout<<"Enter your name   : ";
    getline(cin, name);

    cout<<"Enter your Age  : ";
    cin>>age;

    cout<<"Enter your Sex  : ";
    cin>>sex;

    per.setData(name, age, sex);

}

void displayFunctionality(Person per){
    per.displayData();
}


int main(){

    Person person1;

    setFunctionality(person1);
    displayFunctionality(person1);

    return 0;
}
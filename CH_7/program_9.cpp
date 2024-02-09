#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int age;
};

int main(){

    Student stu1, stu2;

    stu1.name = "Moin Malik";
    stu1.age = 12;

    stu2.name = "Hamza";
    stu2.age = 56;


    cout<<stu1.name<<endl;
    cout<<stu1.age<<endl;



    return 0;
}
#include<iostream>


using namespace std;


int main(){

    class Women{
        public:
            void swim(){
                cout<<"I can Swim";
            }
    };


    class Fish{
        public:
            void walk(){
                cout<<"I can Walk";
            }
    };

    class Mermaid: public Fish, public Women{

    };


    Mermaid mermaid;
    mermaid.swim();
    mermaid.walk();


    return 0;
}
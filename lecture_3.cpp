#include<iostream>


using namespace std;


int main(){


    int maxTries = 0;
    char ch;

    do {
        
        cout<<"Write the letter : "<<ch;
        cin>>ch;

        if (ch == 'A') {
            cout<<"You guessed it Right. Congratulations!"<<endl;
            break;
        }

        maxTries = maxTries + 1;

    } while(maxTries <= 5 );


    return 0;
}
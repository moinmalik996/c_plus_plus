#include<iostream>
#include<string>

using namespace std;

int frequency(char, string, int);


int main(){

    string mystr = "mooiiii";
    cout<<mystr.length()<<endl;
    cout<<"Frequency of d : "<< frequency('i', mystr, 4);

}


int frequency(char ch, string mystring, int position){

    if(position == mystring.length())
        return 0;

    if(ch == mystring[position])
        return 1 + frequency(ch, mystring, position + 1);
    else
        return frequency(ch, mystring, position + 1);

}


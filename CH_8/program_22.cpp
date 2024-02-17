#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers(10);

    for(int i = 0; i < 10; i++){
        numbers[i] = (i+1) * 2;
    }

    
    for(int i = 0; i < 10; i++){
        cout<<i+1<<" ======> "<<numbers[i]<<endl;
    }

    return 0;
}
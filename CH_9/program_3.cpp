#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

class Inventory{
    private:
        string name,
                description;
        int quantity;

    public:
        Inventory(){
            name = "XXX";
            description = "abc";
            quantity = 0;
        }

        Inventory(string n, string desc, int qty){
            name = n;
            description = desc;
            quantity = qty;
        }

        string get_name() const {
            return name;
        }

        string get_description() const {
            return description;
        }

        int get_quantity() const {
            return quantity;
        }
};

int searchProduct(const Inventory [], int, string);

int main(){

    Inventory myarr[5] = {
        Inventory("ABC", "malik moin", 12),
        Inventory("BCA", "malik moin", 45),
        Inventory("CAB", "malik moin", 56),
        Inventory("XYZ", "malik moin", 78),
        Inventory("ZAB", "malik moin", 34),

    };

    string code;
    cout<<"Enter the code for your product : ";
    cin>>code;

    int result = searchProduct(myarr, SIZE, code);

    if(result != -1){
        cout<<"\nYour product is located at "<<result<<" index.";
    } else {
        cout<<"\nYour product is not in the list.\n\n";
    }
    return 0;
}


int searchProduct(const Inventory arr[], int size, string value){
    int index = 0;
    int position = -1;
    bool found = false;

    while(index < size && found != true){
        if(arr[index].get_name() == value){
            position = index;
            found = true;
        }

        index++;
    }

    return position;
}




        
#include <iostream>
#include <iomanip>
#include <string>

//variable declaration
int gaz_price;
using namespace std; 


int main() {

    cout << "Enter the current gaz price: ";
    cin >> gaz_price;

    //Input validation
    while (gaz_price <=0|| gaz_price >=5) {
        cout << "This is definitely unacceptable gaz_price: " << gaz_price << endl;
       cin >> gaz_price;
    }

     cout << "Type a reasonable price please: ";
        cin >> gaz_price;

return 0;
}
#include <iostream>
#include <iomanip>
#include <string>

//variable declaration
int number;
using namespace std;


int main() {

    cout << "Enter the value of the number: ";
    cin >> number;

    //Input validation
    while (number <=5) {
        cout << "Hello" << endl;
        number++;
          
    }

return 0;
}
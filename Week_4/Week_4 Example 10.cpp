//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

const int MIN_LENGTH = 8;
double salesAmount;

int main() {
    // Input section
    cout << "Enter your sales amount: ";
    cin >> salesAmount;
    // Output section

    if (salesAmount > 10000) {
        cout << "Sales quota met." << endl;
    } else {
        cout << "Sales quota not met." << endl;
    }
    return 0;
}
//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

bool SalesMetQuota = false;
double salesAmount;
int main() {
    // Input section
    cout << "Enter your sales amount: ";
    cin >> salesAmount;

    // Output section
    if (salesAmount > 10000) {
        SalesMetQuota = true;
    } else {
        SalesMetQuota = false;
    }

    if (SalesMetQuota) {
        cout << "Sales quota met." << endl;
    } else {
        cout << "You should do better." << endl;
    }
    return 0;
}
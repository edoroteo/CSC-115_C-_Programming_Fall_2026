//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

int x;
int main() {
    // Input section
    cout << "Enter X: ";
    cin >> x;

    // Output section
    if (x >= 20 && x <= 40) {
       cout << "is in the acceptable range." << endl;
    } else {
        cout << "This number is outside the acceptable range." << endl;
    }
    return 0;
}
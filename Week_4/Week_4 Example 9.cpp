//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

const int MIN_LENGTH = 8;
string password;

int main() {
    // Input section
    cout << "Enter your password: ";
    cin >> password;

    // Output section

    if (int len = password.length(); len < MIN_LENGTH) {
        cout << "Your password:" << password <<"is too short." << endl;
        cout << "Please define a new one" << endl;
    } else {
        cout << "Your password:" << password << " is acceptable." << endl;
    }
    return 0;
}
//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

char testScore;


int main() {
    // Input section
    cout << "What is your test score (0-100)? ";
    cin >> testScore;

    // Output section
    
    if (testScore <= 100 && testScore >= 90) {
        cout << "Your grade is A." << endl;
    }
    else {
        cout << "Your grade is not A." << endl;
    }


    return 0;
}
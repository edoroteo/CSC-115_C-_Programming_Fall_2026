//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

const int High_Score = 95;
int number;
double average;

int main() {
    // Input section
    cout << "Enter the value of number: ";
    cin >> number;

    // Output section
    
    if (number % 2 == 0) {
        cout << number << "Congratulations! The number is even." << endl;
    }
    else {
        cout << number << " The number is odd." << endl;
    }


    return 0;
}
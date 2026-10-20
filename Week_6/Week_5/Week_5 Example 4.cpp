//Week_5 Example 1

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;


const int MIN_VALUE=10;
int number;


int main() {
    // Input section

    
    cin >> number;

    if (number < MIN_VALUE)
    {
        int number;
        cin >> number;
        cout << "inner number's value is " <<number<<endl;
    }

    cout << "Outer number's value is " <<number<<endl;
   
    return 0;
}
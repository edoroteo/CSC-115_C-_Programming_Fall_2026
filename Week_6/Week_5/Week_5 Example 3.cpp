//Week_5 Example 1

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;


int a=15, b=3;
int number;


int main() {
    // Input section

    cout << "Welcome to the basic calculator" <<endl;
    cout << "Please pick one letter (1,2,3) from the following menu " <<endl;
    cout << "1. Type (1) To add two values" <<endl;
    cout << "2. Type (2) To substract two values" <<endl;
    cout << "3. Type (3) to quit" <<endl;
    cin >> number;

    // Output section
   switch (int value=abs(number); value)
   {
    case 1:
    cout << "You picked the addition operation \n";

    cout << " the sum of: "<< a << " and "<< b << " is " << a + b << endl;
    break;
    
    case 2:
    cout << "You picked the subtration operation \n";
    cout << " the sum of: "<< a << " and "<< b << " is " << a - b << endl;
    break;
    
    case 3:
    cout << "Goodbye\n";
    break;
    default:
    cout << "This not a valid option";

   }
    return 0;
}
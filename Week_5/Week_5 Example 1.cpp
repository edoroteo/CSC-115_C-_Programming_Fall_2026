//Week_5 Example 1

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;



char choice;

int main() {
    // Input section
    cout << "Please pick one letter (A,B,C) from the following menu ";
    cin >> choice;

    // Output section
   switch (toupper(choice))
   {
    case 'A':
    cout << "You picked the option A. \n";
    break;
    
    case 'B':
    cout << "You picked the option B. \n";
    break;
    
    case 'C':
    cout << "You picked the option C. \n";
    break;

   }
    return 0;
}
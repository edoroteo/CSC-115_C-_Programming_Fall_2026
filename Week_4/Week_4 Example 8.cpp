//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

int testScore;

int main() {
    // Input section
    cout << "Enter your test score (0-100): ";
    cin >> testScore;

    // Output section
    
    if ((testScore <= 100) && (testScore >= 90 )) {
    
        cout << "Your grade is A." << endl;
    
    }
    else if (testScore >= 80) 
        
            cout << "Your grade is B." << endl;
        
        else if (testScore >= 70)
            
                cout << "Your grade is C." << endl;
            
            else if (testScore >= 60)
                
                    cout << "Your grade is D." << endl;
                
                else if (testScore >= 0)
                    
                        cout << "Your grade is F." << endl;

    return 0;
}
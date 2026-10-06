//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

char employed,recent_grad;

int main() {
    // Input section
    cout << "Are you employed? (Y/N): ";
    cin >> employed;
    cout << "Are you a recent graduate? (Y/N): ";
    cin >> recent_grad;

    // Output section
    
    if (employed == 'Y' || employed == 'y') 
    {
        if (recent_grad == 'Y' || recent_grad == 'y') 
        {
            cout << "Congratulations! You are qualified..." << endl;
        }   
            else {
            cout << "You need to graduate first." << endl;
                }   
    }


    return 0;
}
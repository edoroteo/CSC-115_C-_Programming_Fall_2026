//Week_4 Example 2

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

const int High_Score = 95;
int score1, score2, score3;
double average;

int main() {
    // Input section
    cout << "Enter 3 test scores: ";
    cin >> score1 >> score2 >> score3;

    // Processing section
    average = (score1 + score2 + score3) / 3.0;

    // Output section
    cout << "The average score is: " << average << endl;
    
    if (average > High_Score) {
        cout << "Congratulations! High score." << endl;
        cout << "That's a high score!" << endl;
        cout << "You deserve a pat on the back!" << endl;
    }


    return 0;
}
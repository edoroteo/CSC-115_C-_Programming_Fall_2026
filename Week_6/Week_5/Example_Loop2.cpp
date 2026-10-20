//Example of a validation loop

#include <iostream>
#include <iomanip>
#include <string>

//variable declaration
int sc1, sc2, sc3;
double avg=0;
char again;
using namespace std; 

int main() {
   do {
    cout << "Enter the 3 scores: ";
    cin >> sc1 >> sc2 >> sc3;

    //process section
    avg = (sc1 + sc2 + sc3) / 3.0;

    cout << "The average score is: " << avg << endl;
    cout << " Type Y or y to compute another average"<< endl;
    cin >> again;

   } while (again == 'y' || again == 'Y'); 
    

    //Final input validation
    cout << "You are exiting the program " << endl;

    return 0;
}
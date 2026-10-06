// course_grades.cpp
// Week 4 Assignment: Course Grades and Average


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int NUM_COURSES = 5;

char getLetterGrade(double average)
{
    if (average >= 94)
        return 'A';
    else if (average >= 90)
        return 'A-';
    else if (average >= 86)
        return 'B+';
    else if (average >= 83)
        return 'B';
    else if (average >= 79)
        return 'B-';
    else if (average >= 75)
        return 'C+';
    else if (average >= 70)
        return 'C';
    else if (average >= 66)
        return 'C-';
    else
        return 'F';
}

int main()
{
    string courseIds[NUM_COURSES];
    double grades[NUM_COURSES];
    double total = 0.0;

    // ----- Input section -----
    for (int i = 0; i < NUM_COURSES; i++)
    {
        cout << "Course " << (i + 1) << " ID: ";
        cin >> courseIds[i];

        // Input validation: Grade must be between 0 and 100
        do
        {
            cout << "Grade: ";
            cin >> grades[i];
            if (cin.fail() || grades[i] < 0 || grades[i] > 100)
            {
                cout << "Invalid grade. Enter a number from 0 to 100." << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                grades[i] = -1;
            }
        } while (grades[i] < 0);

        total += grades[i];
        cout << endl;
    }

    // ----- Calculation section -----
    double average = total / NUM_COURSES;
    char letter = getLetterGrade(average);

    // ----- Output section -----
    cout << "Course Grades" << endl;
    cout << "-------------" << endl;
    cout << fixed << setprecision(2);
    for (int i = 0; i < NUM_COURSES; i++)
    {
        cout << courseIds[i] << ": " << grades[i] << endl;
    }

    cout << endl;
    cout << "Average Grade: " << average << endl;
    cout << "Letter Grade: " << letter << endl;

    return 0;
}

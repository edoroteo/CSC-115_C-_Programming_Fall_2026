//Week_4 Example 1

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

//Variable section
using namespace std;

int x,y,a,t;

bool result1, result2, result3, result4;
//Main Function

int main() {
    //input section
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of a: ";
    cin >> a;
    
    //processing section
    result1 = (x < y);
    result2 = (x > y);
    result4 = (a=5);

    //output section
    cout << "The Value of result1 is:" << result1 << endl;
    cout << "The Value of result2 is:" << result2 << endl;
    cout << "The Value of result3 is:" << result3 << endl;
    cout << "The Value of result4 is:" << result4 << endl;
    cout << "The Value you want to test a value against it:" << t << endl;
    result3 = (a==t);
    return 0;
}
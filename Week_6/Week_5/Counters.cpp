#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int y, x=1;

int main() {
    y = ++x;
    cout << y<<endl;
    cout << y<<endl;
    y = x++;
    cout << y<<endl;

return 0;
}
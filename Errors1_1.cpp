#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float trueVal, approxVal;
    cout << "\n\nEnter the true value: ";
    cin >> trueVal;
    cout << "Enter the approximate value: ";
    cin >> approxVal;

    float ea = fabs(trueVal - approxVal);
    float er = fabs(ea / trueVal);
    float ep = 100 * er;

    cout << "\n\nAbsolute Error: " << ea << endl;
    cout << "Relative Error: " << er << endl;
    cout << "Percentage Error: " << ep << "%" << endl;

    return 0;
}

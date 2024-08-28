#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float trueValue, approxVal1, approxVal2, approxVal3;
    cout << "\n\nEnter the true value: ";
    cin >> trueValue;
    cout << "\nEnter the first approximate value: ";
    cin >> approxVal1;
    cout << "Enter the second approximate value: ";
    cin >> approxVal2;
    cout << "Enter the third approximate value: ";
    cin >> approxVal3;

    float ea1 = fabs(trueValue - approxVal1);
    float ea2 = fabs(trueValue - approxVal2);
    float ea3 = fabs(trueValue - approxVal3);

    cout << "\n\nAbsolute error for approximation 1: " << ea1 << endl;
    cout << "Absolute error for approximation 2: " << ea2 << endl;
    cout << "Absolute error for approximation 3: " << ea3 << endl;

    float bestApprox;
    if (ea1 < ea2) {
        bestApprox = (ea1 < ea3) ? approxVal1 : approxVal3;
    } else {
        bestApprox = (ea2 < ea3) ? approxVal2 : approxVal3;
    }

    cout << "\n\nBest approximation is: " << bestApprox << endl;

    return 0;
}

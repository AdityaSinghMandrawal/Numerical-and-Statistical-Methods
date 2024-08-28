#include <stdio.h>
#include <math.h>
int main() {
    float trueValue, approxVal1, approxVal2, approxVal3;
    printf("\n\nEnter the true value: ");
    scanf("%f", &trueValue);
    printf("\nEnter the first approximate value: ");
    scanf("%f", &approxVal1);
    printf("Enter the second approximate value: ");
    scanf("%f", &approxVal2);
    printf("Enter the third approximate value: ");
    scanf("%f", &approxVal3);
    float ea1 = fabs(trueValue - approxVal1);
    float ea2 = fabs(trueValue - approxVal2);
    float ea3 = fabs(trueValue - approxVal3);
    printf("\n\nAbsolute error for approximation 1: %f\n", ea1);
    printf("Absolute error for approximation 2: %f\n", ea2);
    printf("Absolute error for approximation 3: %f\n", ea3);
    float bestApprox;
    if (ea1 < ea2) {
        bestApprox = (ea1 < ea3) ? approxVal1 : approxVal3;
    } else {
        bestApprox = (ea2 < ea3) ? approxVal2 : approxVal3;
    }
    printf("\n\nBest approximation is: %0.2f\n\n", bestApprox);
    return 0;
}

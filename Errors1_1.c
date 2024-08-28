#include<stdio.h>
#include<math.h>
int main(){
    float trueVal, approxVal;
    printf("\n\nEnter the true value: ");
    scanf("%f",&trueVal);
    printf("Enter the approximate value: ");
    scanf("%f",&approxVal);
    float ea=fabs(trueVal-approxVal);
    float er=fabs(ea/trueVal);
    float ep=100*er;
    printf("\n\nAbsolute Error: %f\n",ea);
    printf("Relative Error: %f\n",er);
    printf("Percentage Error: %f\n\n",ep);
    return 0;
}

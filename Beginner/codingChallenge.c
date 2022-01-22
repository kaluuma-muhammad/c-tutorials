#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double b;

    printf("This app will calculate the hypotenuse of a right angle triangle \n");

    // Get fisrt value
    printf("Enter first value :");
    // lf = double format character
    scanf("%lf", &a);

    // Get second value
    printf("Enter second value :");
    scanf("%lf", &b);

    // calculate the hypotenuse
    double c = sqrt((a*a) + (b*b));

    // output the hypotenuse
    printf("The hypotenuse is %f", c);

    return 0;
}

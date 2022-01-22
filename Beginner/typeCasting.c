#include <stdio.h>

int main() {
    int eggs;
    printf("Enter number of eggs for the day: ");
    scanf("%i", &eggs);

    double dozen = (double) eggs / 12;
    printf("Number of dozens of eggs is %f from %i eggs ", dozen, eggs);
    return 0;
}

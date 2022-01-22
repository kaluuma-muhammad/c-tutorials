#include <stdio.h>

int main() {
    int radius;
    printf("Enter radius value: ");
    scanf("%i", &radius);

    double area = 3.14159 * (radius * radius);

    printf("The area of a circle with radius %i is %f", radius, area);
    return 0;
}

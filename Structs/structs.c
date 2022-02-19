#include <stdio.h>

// Structs group two variables in one variable
typedef struct
{
    double width;
    double length;
} rectangle;


int main() {
    rectangle measurements = {54, 36};

    double area = measurements.width * measurements.length;

    printf("Width: %f, Length: %f,\nThus area %f", measurements.width, measurements.length, area);

    return 0;
}

#include <stdio.h>

int main() {
    int myGrades[] = {64, 28, 26, 94, 17, 38, 82, 23, 12, 43};
    printf("%d\n", myGrades[4]);

    int size = 5;
    int numbers[size];
    numbers[0] = 45;
    numbers[1] = 75;
    numbers[2] = 93;
    numbers[3] = 23;
    numbers[4] = 13;

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Initialization
    // Comparison
    // Update

    printf("Enter max value to be looped: ");
    int max;
    scanf("%d", &max);

    // Increament loop
    for (int i = 1; i <= max; i++) {
        printf("%d\n", i);
    }
    printf("\n");

    // Decreament loop
    for (int i = max; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}

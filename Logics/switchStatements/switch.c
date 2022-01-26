#include <stdio.h>

int main() {
    printf("1 - Add employee\n");
    printf("2 - View employee\n");
    printf("3 - Search employees\n");
    printf("4 - Exit\n");

    printf("Choose from menu please :");
    int input;
    scanf("%d", &input);

    switch (input) {
        case 1:
            printf("Adding employee");
            break;
        case 2:
            printf("Viewing employee");
            break;
        case 3:
            printf("Searching employee");
            break;
        case 4:
            printf("Exiting app...");
            break;
        default:
            printf("Incorrect value");
            break;
    }

    return 0;
}

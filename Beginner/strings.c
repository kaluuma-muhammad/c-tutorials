#include <stdio.h>

int main() {
    char fname[31];
    char lname[31];

    printf("Enter first name: ");
    scanf("%s", fname);
    getchar();

    printf("Enter second name: ");
    scanf("%s", lname);

    printf("Hi %s %s", fname, lname);
    return 0;
}

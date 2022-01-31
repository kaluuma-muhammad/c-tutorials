#include <stdio.h>

int main () {
    int i = 0;

    while (i < 11) {
        if (i == 5) {
            printf("5 is the best ");
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    }

    return 0;
}

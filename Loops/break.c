#include <stdio.h>
#include <stdbool.h>

int main () {
    int num = 452;
    int i = 0;

    while (true) {
        printf("%d\n", i);
        if (i == num) {
            printf("We found it");
            break;
        }
        i++;
    }

    return 0;
}

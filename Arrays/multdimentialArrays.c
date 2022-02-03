#include <stdio.h>

int main() {
    int const columns = 4;
    int const rows = 2;

    int nums[][4] = {
        {32, 34, 47, 45},
        {68, 76, 67, 90}
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", nums[i][j]);
        }

        printf("\n");
    }
    return 0;
}

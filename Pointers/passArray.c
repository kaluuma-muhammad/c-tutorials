#include <stdio.h>

void updateArray(int val[], int count) {
    for (int i = 0; i < count; i++) {
        val[i]++;
        printf("%d ", val[i]);
    }
}

int main() {
    int nums[] = {52, 59, 24, 15, 29};
    updateArray(nums, 5);
    printf("\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

/*
    From my previous file multdiamentional arrays
    Am going to refuctor my code for better understanding
*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int const columns = 4;
    int const rows = 3;

    int nums[][4] = {
        {12, 45, 78, 50},
        {18, 67, 61, 40},
        {65, 27, 98, 52}
    };

    for (int i = 0; i < rows; i++) {
        printArray(nums[i], columns);
        printf("\n");
    }
    return 0;
}
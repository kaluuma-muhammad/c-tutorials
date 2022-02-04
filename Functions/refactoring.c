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
    int const rows = 2;

    int nums[][4] = {
        {32, 34, 47, 45},
        {68, 76, 67, 90}
    };

    for (int i = 0; i < rows; i++) {
        printArray(nums[i], columns);
        printf("\n");
    }
    return 0;
}

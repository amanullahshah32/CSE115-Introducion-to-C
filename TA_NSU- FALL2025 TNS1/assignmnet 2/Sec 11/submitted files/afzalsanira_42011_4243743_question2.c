#include <stdio.h>

void sort_ascending(int *p, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            // Compare current element and next element using pointers
            if (*(p + j) > *(p + j + 1)) {
                // Swap values using pointers
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {12, 7, 14, 9, 10, 11};
    int size = 6;

    printf("Original Array: ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);

    sort_ascending(arr, size);

    printf("\nSorted Array:   ");
    for(int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

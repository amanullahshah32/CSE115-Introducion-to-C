#include <stdio.h>

// Function Prototype
void sortArray(int *ptr, int size);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = 7;
    int i;

    printf("Original Array: \n");
    for (i = 0; i < size; i++) {
        // We can print using array syntax or pointer syntax here
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function
    // 'arr' acts as a pointer to the first element (&arr[0])
    sortArray(arr, size)N;

    printf("Sorted Array (Ascending): \n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function Definition using POINTERS
void sortArray(int *ptr, int size) {
    int i, j, temp;

    // Outer loop: controls the number of passes
    for (i = 0; i < size - 1; i++) {

        // Inner loop: performs the comparisons
        for (j = 0; j < size - i - 1; j++) {

            // COMPARE: Check if current element is greater than the next element
            // *(ptr + j) is the value at index j
            // *(ptr + j + 1) is the value at index j+1
            if (*(ptr + j) > *(ptr + j + 1)) {

                // SWAP Logic
                temp = *(ptr + j);              // Save current value
                *(ptr + j) = *(ptr + j + 1);    // Move next value to current
                *(ptr + j + 1) = temp;          // Move saved value to next
            }
        }
    }
}

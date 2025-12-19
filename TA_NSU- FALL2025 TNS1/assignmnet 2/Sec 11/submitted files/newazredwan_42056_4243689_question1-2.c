#include <stdio.h>

// Prototype as requested
int max(int *p, int size);

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int size = 5;

    // Function call
    int result = max(arr, size);
    printf("Largest element: %d\n", result);

    return 0;
}

// Implementation
int max(int *p, int size) {
    int maximum_value = *p; // Initialize with the first element
    for (int i = 0; i < size; i++) {
        // Access element using pointer arithmetic
        if (*(p + i) > maximum_value) {
            maximum_value = *(p + i);
        }
    }
    return maximum_value;
}

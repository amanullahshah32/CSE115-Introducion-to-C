
#include <stdio.h>

// Function Implementation
int max(int *p, int size) {
    // Initialize max with the first element (dereference p)
    int maxVal = *p;

    for(int i = 1; i < size; i++) {
        // Access element at index i using pointer arithmetic
        // *(p + i) gets the value at "Address of p + i steps"
        if(*(p + i) > maxVal) {
            maxVal = *(p + i);
        }
    }
    return maxVal;
}

int main() {
    int arr[] = {12, 45, 2, 99, 23};
    int size = 5;
    printf("Max value: %d\n", max(arr, size)); // passing 'arr' works as a pointer
    return 0;
}

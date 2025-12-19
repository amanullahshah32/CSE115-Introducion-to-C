#include <stdio.h>

int max(int *p, int size) {
    int maximum = *p; // Assume first element is max
    for (int i = 1; i < size; i++) {
        // Access array element using pointer arithmetic
        if (*(p + i) > maximum) {
            maximum = *(p + i);
        }
    }
    return maximum;
}

int main() {
    int arr[] = {10, 324, 45, 90, 9808};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Largest element is: %d\n", max(arr, n));
    return 0;
}

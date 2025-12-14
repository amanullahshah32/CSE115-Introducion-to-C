#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Initial array
    int size = 5;
    int k, newValue;

    // 1. Show original array
    printf("Original Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. Get user input
    printf("Enter index to modify (0 to %d): ", size - 1);
    scanf("%d", &k);
    printf("Enter new value: ");
    scanf("%d", &newValue);

    // 3. Validation and Modification
    if(k >= 0 && k < size) {
        arr[k] = newValue; // Direct assignment
        printf("Modification successful.\n");
    } else {
        printf("Invalid index!\n");
    }

    // 4. Show modified array
    printf("Modified Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

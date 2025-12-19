
#include <stdio.h>

// Function Prototypes
void shiftArr1Pos(int arr1[], int arrSize);
void arr1Rotate(int arr1[], int arrSize, int rotFrom);

int main() {
    int arr[100], n, rotFrom;

    // Input
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter rotation index (N): ");
    scanf("%d", &rotFrom);

    // Call Rotate Function
    arr1Rotate(arr, n, rotFrom);

    // Output
    printf("After rotating from index %d, the array is: ", rotFrom);
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// Helper Function: Shifts array left by exactly ONE position
void shiftArr1Pos(int arr1[], int arrSize) {
    int first = arr1[0]; // Save the first element (it will fall off the edge)

    // Shift everyone else to the left
    for(int i = 0; i < arrSize - 1; i++) {
        arr1[i] = arr1[i + 1];
    }

    // Put the first element at the back
    arr1[arrSize - 1] = first;
}

// Main Rotate Function
void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    // If we want to start from index 'rotFrom', we need to shift 'rotFrom' times.
    // Example: To make Index 2 the start, we shift left 2 times.

    for(int i = 0; i < rotFrom; i++) {
        shiftArr1Pos(arr1, arrSize);
    }
}

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int k;

    // Display Original
    printf("Original: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter index to delete (0 to %d): ", size - 1);
    scanf("%d", &k);

    if(k >= 0 && k < size) {
        // --- LOGIC START ---
        // Loop from the deletion point (k) to the second-to-last element
        for(int i = k; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Copy the NEXT element into the CURRENT slot
        }
        // Decrease the size counter effectively removing the last element
        size--;
        // --- LOGIC END ---

        printf("Element deleted.\n");
    } else {
        printf("Invalid index!\n");
    }

    // Display Result
    printf("New Array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);

    return 0;
}

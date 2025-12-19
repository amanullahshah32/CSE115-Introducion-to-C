
#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int k, value;

    printf("Original: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");

    printf("Enter index to insert (0 to %d): ", size); // Can insert at 'size' (end)
    scanf("%d", &k);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Validate index and ensure array isn't full
    if(k >= 0 && k <= size && size < 100) {

        // --- LOGIC START ---
        // Loop backwards from the current last position down to k
        for(int i = size; i > k; i--) {
            arr[i] = arr[i - 1]; // Move previous element into current slot
        }

        arr[k] = value; // Place the new value
        size++;         // Increase the count of elements
        // --- LOGIC END ---

        printf("Element inserted.\n");
    } else {
        printf("Invalid index or Array full!\n");
    }

    printf("New Array: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);

    return 0;
}

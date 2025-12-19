
#include <stdio.h>

int main() {
    int X[100]; // Declare array with max capacity
    int n, i, newValue;

    // 1. Get the number of initial elements
    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    // 2. Populate the first n elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    // 3. Get the new element to append
    printf("Enter new element to add after the first %d elements: ", n);
    scanf("%d", &newValue);

    // 4. Logic: Insert at index 'n'
    // Since indices are 0 to n-1, index 'n' is the immediate next slot.
    X[n] = newValue;

    // 5. Update the total count of elements
    n++; // Now we have n+1 elements

    // 6. Display final array
    printf("Updated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}

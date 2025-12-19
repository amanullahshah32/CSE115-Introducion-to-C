#include <stdio.h>

int main(void) {
    int X[100];
    int n;

    // Read n and validate
    printf("Enter n (0..99): ");
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n < 0 || n > 99) {
        printf("Invalid n\n");
        return 0;
    }

    // Populate first n elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &X[i]) != 1) {
            return 0;
        }
    }

    // Read the new element to insert after the n-th element
    int value;
    printf("Enter new element to insert: ");
    if (scanf("%d", &value) != 1) {
        return 0;
    }

    X[n] = value;
    int count = n + 1;

    // Output result
    printf("Array after insertion (%d elements):\n", count);
    for (int i = 0; i < count; ++i) {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}

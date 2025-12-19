#include <stdio.h>

int main() {
    int X[100], n, newValue;

    printf("Enter number of elements n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    printf("Enter new value to insert after n elements: ");
    scanf("%d", &newValue);

    X[n] = newValue; // Insert at position n
    n++; // Increase count

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", X[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[100], n, k, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to insert (0 to %d): ", n);
    scanf("%d", &k);

    if(k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter value to insert: ");
    scanf("%d", &newValue);

    // Shift elements right
    for(int i = n; i > k; i--) {
        arr[i] = arr[i-1];
    }

    arr[k] = newValue;
    n++; // Increase array size

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


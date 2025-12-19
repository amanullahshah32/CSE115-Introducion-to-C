#include <stdio.h>

int main() {
    int n, k, newValue;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index k to modify (0 to %d): ", n - 1);
    scanf("%d", &k);
    if (k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }
    printf("Enter new value: ");
    scanf("%d", &newValue);
    printf("\nArray before modification:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    arr[k] = newValue;
    printf("\n\nArray after modification:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}


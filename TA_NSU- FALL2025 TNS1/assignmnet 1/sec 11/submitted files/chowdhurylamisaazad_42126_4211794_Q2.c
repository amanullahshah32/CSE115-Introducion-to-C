
#include <stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to delete: ");
    scanf("%d", &k);

    // Validate index
    if (k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    printf("Updated array after deletion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

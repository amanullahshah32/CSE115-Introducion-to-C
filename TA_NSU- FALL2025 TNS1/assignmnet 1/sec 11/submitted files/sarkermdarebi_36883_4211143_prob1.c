#include <stdio.h>

int contains(const int *a, int n, int val, int exclude_index) {
    for (int i = 0; i < n; ++i) {
        if (i == exclude_index) continue;
        if (a[i] == val) return 1;
    }
    return 0;
}

int main(void) {
    int n;
    printf("Enter array size (1..100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[100];

    // Read unique integers into the array
    for (int i = 0; i < n; ++i) {
        while (1) {
            int v;
            printf("arr[%d] = ", i);
            if (scanf("%d", &v) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            if (contains(arr, i, v, -1)) {
                printf("Duplicate detected. Enter a unique integer.\n");
            } else {
                arr[i] = v;
                break;
            }
        }
    }

    // Get index
    int k;
    printf("Enter index k to modify (0..%d): ", n - 1);
    if (scanf("%d", &k) != 1 || k < 0 || k >= n) {
        printf("Invalid index.\n");
        return 1;
    }

    // Get new value
    int newVal;
    while (1) {
        printf("Enter new unique value for arr[%d]: ", k);
        if (scanf("%d", &newVal) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (contains(arr, n, newVal, k)) {
            printf("Value already exists elsewhere. Enter a different value.\n");
        } else {
            break;
        }
    }

    // Display result
    arr[k] = newVal;

    printf("Updated array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}

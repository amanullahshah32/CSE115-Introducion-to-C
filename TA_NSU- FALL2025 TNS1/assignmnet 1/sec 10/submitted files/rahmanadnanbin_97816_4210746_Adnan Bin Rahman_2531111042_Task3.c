#include <stdio.h>

int main() {
    int arr[100], n, k, value, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index k where you want to insert: ");
    scanf("%d", &k);

    printf("Enter value to insert: ");
    scanf("%d", &value);
    if (k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Value already exists! Cannot insert duplicate.\n");
            return 0;
        }
    }
    for (i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = value;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

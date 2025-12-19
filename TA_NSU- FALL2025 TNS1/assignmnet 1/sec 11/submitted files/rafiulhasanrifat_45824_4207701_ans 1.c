#include <stdio.h>

int main() {
    int n, k, newValue;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index (k) to modify: ");
    scanf("%d", &k);

    if (k >= 0 && k < n) {

        printf("Enter the new value for index %d: ", k);
        scanf("%d", &newValue);

        arr[k] = newValue;

        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index!\n");
    }

    return 0;
}

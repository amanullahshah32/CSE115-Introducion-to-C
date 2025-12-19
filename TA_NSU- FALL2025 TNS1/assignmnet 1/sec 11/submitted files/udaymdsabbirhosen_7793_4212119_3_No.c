#include <stdio.h>

int main() {
    int n, k, i, x;
    int arr[100];

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to insert at (0 to %d): ", n-1);
    scanf("%d", &k);



    printf("Enter value to insert: ");
    scanf("%d", &x);

    for (i = n - 1; i >= k; i--) {
        arr[i + 1] = arr[i];
    }
    arr[k] = x;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

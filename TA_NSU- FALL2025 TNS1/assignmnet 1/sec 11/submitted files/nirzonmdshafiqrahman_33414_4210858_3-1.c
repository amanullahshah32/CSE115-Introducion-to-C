#include <stdio.h>

int main() {
    int n, k, newValue;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter index k to insert at (0 to %d): ", n);
    scanf("%d", &k);
    if (k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }
    printf("Enter new value to insert: ");
    scanf("%d", &newValue);
    printf("\nArray before insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = newValue;
    n++;  
    printf("\n\nArray after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

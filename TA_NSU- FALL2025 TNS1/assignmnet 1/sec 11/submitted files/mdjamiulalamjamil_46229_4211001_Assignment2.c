#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to delete (0 to %d): ", n-1);
    scanf("%d", &k);

    if(k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    // Shift elements left
    for(int i = k; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; // Reduce array size

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


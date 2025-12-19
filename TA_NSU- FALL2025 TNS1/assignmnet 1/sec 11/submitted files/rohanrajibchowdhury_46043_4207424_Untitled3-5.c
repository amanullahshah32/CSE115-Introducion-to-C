//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

int main() {
    int n, k, value;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d unique elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to insert: ");
    scanf("%d", &k);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (k < 0 || k > n) {
        printf("Invalid index!\n");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Value already exists. Array must be unique.\n");
            return 0;
        }
    }

    for (int i = n; i > k; i--) {
        arr[i] = arr[i - 1];
    }

    arr[k] = value;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

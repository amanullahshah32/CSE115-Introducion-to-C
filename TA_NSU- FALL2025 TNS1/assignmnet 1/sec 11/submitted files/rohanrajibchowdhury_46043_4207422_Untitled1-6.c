
//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

int main() {
    int n, k, newValue;
    int i, j;
    int isDuplicate = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate value detected! Enter a unique value.\n");
                i--;
                break;
            }
        }
    }
    printf("Enter index to modify (0 to %d): ", n - 1);
    scanf("%d", &k);

    if (k < 0 || k >= n) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &newValue);

    for (i = 0; i < n; i++) {
        if (i != k && arr[i] == newValue) {
            isDuplicate = 1;
            break;
        }
    }

    if (isDuplicate) {
        printf("New value already exists in array! Modification not allowed.\n");
    } else {
        arr[k] = newValue;
        printf("Array after modification:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n, i, j, isUnique;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("\nEnter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nUnique elements in the array:\n");

    int foundUnique = 0;

    for(i = 0; i < n; i++) {
        isUnique = 1;
        for(j = 0; j < n; j++) {

            if(i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }


        if(isUnique) {
            printf("arr[%d] = %d\n", i, arr[i]);
            foundUnique = 1;
        }
    }

    if(!foundUnique) {
        printf("No unique elements found (all elements are repeated).\n");
    }

    return 0;
}

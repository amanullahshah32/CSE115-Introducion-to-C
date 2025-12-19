#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to rotate from: ");
    scanf("%d", &k);

    printf("From index %d Position, array elements are: ", k);
    for(int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Array elements prior to index %d: ", k);
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("After rotating from %d, the array is: ", k);

    for(int i = k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for(int i = 0; i < k; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

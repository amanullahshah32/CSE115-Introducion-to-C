
#include <stdio.h>

int max(int *p, int size) {
    int maximum = *p;

    for(int i = 1; i < size; i++) {
        if(*(p + i) > maximum) {
            maximum = *(p + i);
        }
    }

    return maximum;
}

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = max(arr, size);

    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nMaximum element: %d\n", result);

    return 0;
}

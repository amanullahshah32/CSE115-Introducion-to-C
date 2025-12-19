#include <stdio.h>

void RevArr(int arr[], int size) {
    int start = 0, end = size - 1, temp;

    while(start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    RevArr(arr, n);

    printf("\nReversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


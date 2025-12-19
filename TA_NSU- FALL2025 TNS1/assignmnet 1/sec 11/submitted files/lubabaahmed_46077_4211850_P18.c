#include <stdio.h>


void squarearray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }
}


void rcvarray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];


    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    squarearray(arr, size);

    printf("\nAfter squaring: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }


    rcvarray(arr, size);

    printf("\nAfter reversing: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

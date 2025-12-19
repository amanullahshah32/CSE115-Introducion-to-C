#include <stdio.h>

void shiftArr1Pos(int arr[], int size) {
    int temp = arr[0];
    for(int i=0; i<size-1; i++) arr[i] = arr[i+1];
    arr[size-1] = temp;
}

void arr1Rotate(int arr[], int size, int rotFrom) {
    for(int i=0; i<rotFrom; i++) shiftArr1Pos(arr, size);
}

int main() {
    int arr[100], n, N;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);

    printf("Enter rotation count: ");
    scanf("%d", &N);

    arr1Rotate(arr, n, N);

    printf("Rotated array:\n");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}


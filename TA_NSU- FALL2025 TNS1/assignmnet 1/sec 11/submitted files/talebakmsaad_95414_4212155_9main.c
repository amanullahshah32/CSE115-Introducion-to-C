#include<stdio.h>

void shift_Arr1Pos(int arr1[], int arrSize) {
    int first = arr1[0];
    for(int i = 0; i < arrSize - 1; i++)
        arr1[i] = arr1[i + 1];
    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom) {
    for(int i = 0; i < rotFrom; i++)
        shift_Arr1Pos(arr1, arrSize);
}

int main() {
    int n, N;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d", &N);

    arr1Rotate(arr, n, N);

    for(int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}


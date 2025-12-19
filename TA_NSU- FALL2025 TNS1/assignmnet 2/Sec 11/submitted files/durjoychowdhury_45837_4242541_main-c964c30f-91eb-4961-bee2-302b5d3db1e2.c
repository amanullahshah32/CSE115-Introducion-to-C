#include <stdio.h>

void rev_arr(int *arr1, int *rev_arr1, int size) {
    for (int i = 0; i < size; i++) {
        *(rev_arr1 + i) = *(arr1 + size - 1 - i);
    }
}

int main() {
    int arr[100], rev[100], n;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    rev_arr(arr, rev, n);

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    return 0;
}

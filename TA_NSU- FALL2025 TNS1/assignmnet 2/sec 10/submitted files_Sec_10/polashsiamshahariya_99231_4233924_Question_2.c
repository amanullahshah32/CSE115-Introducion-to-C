#include <stdio.h>
void sortAscending(int *arr, int size) {
    int *p, *q, temp;
    for (p = arr; p < arr + size - 1; p++) {
        for (q = p + 1; q < arr + size; q++) {
            if (*p > *q) {
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sortAscending(arr, n);
    printf("Array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
